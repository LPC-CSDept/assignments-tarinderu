#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	//open the file for reading
	std::ifstream infile("students.txt");
	int a,b,count=1,highavg=0;
	char name[50];
	//loop until termination condition is met
	while(true)
	{
		//we use count variable to shift between name and scores
		if(count==1)
		{
			//input the name and display
			if(infile>>name)
			cout<<"Student name: "<<name;
			else
			break; //if there's no input then terminate the while loop
			count++;
		}
		else
		{
			//input the scores
			infile>>a>>b;
			//use double to get the average scores
			double avg=(double)(a+b)/2;
			//display the scores, sum of scores and the average of scores
			cout<<"    Score 1: "<<a<<"    Score 2: "<<b<<"    Sum: "<<(a+b)<<"    Avg: "<<avg<<endl;
			//set the count back to 1
			count=1;
			//if the average is greater than 80 then increment highavg count;
			if(avg>80)
			highavg++;
		}
	}
	//Display the total number of students with average greater than 80
	cout<<"The total number of students who has the average > 80: "<<highavg<<" students"<<endl;
	return 0;
}