#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    int intdivision;
    cout << "Enter a number: ";
    cin >> num1;
    cout << "Enter a number: ";
    cin >> num2;
    while (num1 != num2){
        intdivision = num1 / num2;
        cout << "Answer is " << intdivision << endl;
    }
    if (num1 == num2)
        cout << "Program Finished";
    return 0;
}