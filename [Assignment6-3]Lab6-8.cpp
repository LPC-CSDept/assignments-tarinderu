#include <iostream>
using namespace std;

int & retadr()
{
    static int x = 10;
    return x;
}
int main()
{
    retadr() = 30;
    cout << retadr() << endl;
    return 0;
}
// retadr will return the value it is equal to. With the
// main function the value that will be displayed is 30.