#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	
	std::ifstream infile("students.txt");
	int a,b,count=1,highavg=0;
	char name[50];
	while(true)
	{
		if(count==1)
		{
			if(infile>>name)
			cout<<"Student name: "<<name;
			else
			break; 
			count++;
		}
		else
		{
			infile>>a>>b;
			double avg=(double)(a+b)/2;
			cout<<"    Score 1: "<<a<<"    Score 2: "<<b<<"    Sum: "<<(a+b)<<"    Avg: "<<avg<<endl;
			count=1;
			if(avg>80)
			highavg++;
		}
	}
	cout<<"The total number of students who has the average > 80: "<<highavg<<" students"<<endl;
	return 0;
}
