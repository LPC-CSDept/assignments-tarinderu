#include <iostream>
using namespace std;

int main()
{
    int num1, num2, num3;

    cout << "Enter three numbers: ";
    cin >> num1;
    cin >> num2;
    cin >> num3;
    if (num1 > num2 && num1 > num3)
        cout << "The highest number was " << num1 << endl;
    if (num2 > num1 && num2 > num3)
        cout << "The highest number was " << num2 << endl;
    if (num3 > num1 && num3 > num2)
        cout << "The highest number was " << num3 << endl;
    if (num1 < num2 && num1 < num3)
        cout << "The lowest number was " << num1 << endl;
    if (num2 < num1 && num2 < num3)
        cout << "The lowest number was " << num2 << endl;
    if (num3 < num1 && num3 < num2)
        cout << "The lowest number was " << num3 << endl;
    return 0;
}