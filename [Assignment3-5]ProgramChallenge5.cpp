#include <cstdlib>
#include <iostream>
using namespace std;

int main() {
    int num1 = rand() % 10;
    int num2 = rand() % 10;
    int num3 = rand() % 10;

    long sum = num1 + num2 + num3;

    double avg = (double)sum / 4;
    // Set as 4 for 2 decimals
    cout.precision(4);
    cout << "Sum: " << sum << endl;
    cout << "Average: " << avg << endl;
}