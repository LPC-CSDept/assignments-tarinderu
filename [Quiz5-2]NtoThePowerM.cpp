#include <iostream>
using namespace std;

int main()
{
    int exponent;
    float base, result = 1;

    cout << "Enter base and exponent number: ";
    cin >> base >> exponent;
    
    cout << base << "A" << exponent << " = ";

    while (exponent != 0){
        result *= base;
        --exponent;
    }
    cout << result;
    return 0;
}