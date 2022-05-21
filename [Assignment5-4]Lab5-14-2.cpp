#include<iostream>
#include<fstream>
using namespace std;
int main(){
	//num to store the number read from the file
	int num;
	//count to store number of integers read
	int count=0;
	int sum=0;
	int min=1000000;
	int max=0;
	float avg;
	//file object
	ifstream file("random.txt");
		//reading the first integer into num
		file>>num;
	//this loop will iterate until the end of the file
	while(!file.eof()){
		//every time a integer is read, count is incremented
		count++;
		//the num is added to sum
		sum=sum+num;
		//min and max values are obtained
		if(num>max){
			max=num;
		}
		if(num<min){
			min=num;
		}
		//reading next nuber
		file>>num;	
	}
	//closing file
	file.close();
	
	//printing the output
	cout<<"Total Number of Integers read are: "<<count<<endl;
	cout<<"Minimum value is: "<<min<<endl;
	cout<<"Maximum value is: "<<max<<endl;
	cout<<"Sum of all integers is:"<<sum<<endl;
	avg=sum/count;
	cout<<"Average is: "<<avg<<endl;
	

}