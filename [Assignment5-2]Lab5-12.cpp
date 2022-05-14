#include <iostream>
using namespace std;

struct student{
    string name;
    int marks[5];
};

int main()
{
    cout << "Enter the name of the student: \n";
    string name;
    cin >> name;
    cout << "Enter the number of marks: \n";
    int n; 
    cin >> n;
    student stu[n];
    int sum = 0;
    for (int i = 0; i < n; i++){
        cout << "Enter mark "<<(i+1)<<": ";
        cin >> stu[i].marks [0];
        sum += stu[i].marks[0];
    }
    cout << "Average is: " << sum/n << endl;
}