#include <iostream>
using namespace std;

int main()
{
    int classA, classB, classC, total1, total2, total3;
    
    cout << "How many tickets were sold for class A? ";
    cin >> classA;
    cout << "How many tickets were sold for class B? ";
    cin >> classB;
    cout << "How many tickets were sold for classC? ";
    cin >> classC;
    total1 = 15 * classA;
    total2 = 12 * classB;
    total3 = 9 * classC;
    cout << "The total amount of income from class A is "<< total1 <<" dollars.\n";
    cout << "The tottal amount of income from class B is "<< total2 <<" dollars.\n" ;
    cout << "The total amount of income from class C is "<< total3 <<" dollars.\n";
    return 0;
}
