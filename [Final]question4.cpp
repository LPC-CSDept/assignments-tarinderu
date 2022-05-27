#include <iostream>
#include <fstream>
#define FILE_NAME "emp.dat"

using namespace std;


class Student {
private : 
	int 	stuScore;
	char 	stuName[100] ;
public  :
	
	void readStudent(){
		cout<<"Student DETAILS"<<endl;
		cout<<"ENTER Students Score : " ;
		cin>>stuScore;
		cin.ignore(1);
		cout<<"ENTER  NAME OF THE Student : ";
		cin.getline(stuName,100);

	}
	
	void displayStudent(){
		cout<<"Students Score: "<<stuScore<<endl
		    <<"Students NAME: "<<stuName<<endl;
	}
};

int main(){
	
	
	Student emp;
	
	emp.readStudent();
	
	
	fstream file;
	file.open(FILE_NAME,ios::out|ios::binary);
	if(!file){
		cout<<"Error in creating file...\n";
		return -1;
	}
	
	file.write((char*)&emp,sizeof(emp));
	file.close();
	cout<<"Date saved into file the file.\n";
	
	
	file.open(FILE_NAME,ios::in|ios::binary);
	if(!file){
		cout<<"Error in opening file...\n";
		return -1;
	}
	
	if(file.read((char*)&emp,sizeof(emp))){
			cout<<endl<<endl;
			cout<<"Data extracted from file..\n";
			//print the object
			emp.displayStudent();
	}
	else{
		cout<<"Error in reading data from file...\n";
		return -1;
	}
	
	file.close();	
	return 0;
}

