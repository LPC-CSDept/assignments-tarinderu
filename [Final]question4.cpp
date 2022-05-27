#include <iostream>
#include <fstream>
#define FILE_NAME "emp.dat"

using namespace std;

//class employee declaration
class Student {
private : 
	int 	stuScore;
	char 	stuName[100] ;
public  :
	//function to read employee details
	void readStudent(){
		cout<<"Student DETAILS"<<endl;
		cout<<"ENTER Students Score : " ;
		cin>>stuScore;
		cin.ignore(1);
		cout<<"ENTER  NAME OF THE Student : ";
		cin.getline(stuName,100);

	}
	//function to write employee details
	void displayEmployee(){
		cout<<"Students Score: "<<stuScore<<endl
		    <<"Students NAME: "<<stuName<<endl;
	}
};

int main(){
	
	//object of Employee class
	Student emp;
	//read employee details
	emp.readStudent();
	
	//write object into the file
	fstream file;
	file.open(FILE_NAME,ios::out|ios::binary);
	if(!file){
		cout<<"Error in creating file...\n";
		return -1;
	}
	
	file.write((char*)&emp,sizeof(emp));
	file.close();
	cout<<"Date saved into file the file.\n";
	
	//open file again 
	file.open(FILE_NAME,ios::in|ios::binary);
	if(!file){
		cout<<"Error in opening file...\n";
		return -1;
	}
	
	if(file.read((char*)&emp,sizeof(emp))){
			cout<<endl<<endl;
			cout<<"Data extracted from file..\n";
			//print the object
			emp.displayEmployee();
	}
	else{
		cout<<"Error in reading data from file...\n";
		return -1;
	}
	
	file.close();	
	return 0;
}

