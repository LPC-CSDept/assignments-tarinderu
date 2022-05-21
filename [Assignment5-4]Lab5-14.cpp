#include<iostream>
//fstream library to deal with files
#include<fstream>
//cstdlib which contains srand()
#include<cstdlib>
#include<time.h>

using namespace std;
int main(){
	srand(time(0));
	//num of integers to be generated
	int N;
	//file object 
	ofstream file("Random.txt");
	cout <<"Enter number of Integers to write: ";
	cin>>N;
	int i;
	for(i=0;i<N;i++){
	//generating random numbers in the range of 0 to 100
	//and writing them to the file
	file<<rand()%100<<endl;	
	}
	//closing the file
	file.close();
}
