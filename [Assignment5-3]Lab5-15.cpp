#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    int computerNum, guess;
    srand(time(0));
    computerNum = 1 + rand() % (100 - 1 + 1);
    cout << "The random number generated by the computer is " << computerNum << endl;
    cout << "I am thinking of a number between 1 to 100\n";
    cout << "Can you guess what it is? Enter your guess: ";
    cin >> guess;
    while (guess != computerNum)
    {
        if (guess > computerNum)
        {
            cout << "Your " << guess << " is too high.\n";
        }
        else
        {
            cout << "Your " << guess << " is too low.\n";
        }
        cin >> guess;
    }
    cout << "Congrats, you got my number, it was " << computerNum << endl;
    system("pause");
    return 0;
}