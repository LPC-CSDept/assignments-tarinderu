#include <iostream>
using namespace std;

int main()
{
    int doubleCelcius, fahrenheit;

    cout << "Enter the the temperature in Celcius: ";
    cin >> doubleCelcius;
    fahrenheit = (9.0/5.0) * doubleCelcius + 32;
    cout << "Celcius is " << doubleCelcius << ", in Fahrenheit it would be " << fahrenheit;
    return 0;
}