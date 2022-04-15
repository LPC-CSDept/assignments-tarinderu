#include <iostream>
using namespace std;

int main()
{
    int first, second, third;

    cout << "Enter three numbers: ";
    cin >> first >> second >> third;

    if(first < second && first < third) {
        cout << "Smallest of three numbers is " << first;
    } else if (second < first && second < third) {
        cout << "smalles of three numbers is " << second;
    } else {
        cout << "Smallest of three numbers is " << third;
    }
    return 0;
}