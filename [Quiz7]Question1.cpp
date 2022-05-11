#include <iostream>
#include <cmath>
using namespace std;

const int N = 10;

int main()
{
  int Number[N] = {10, 15, 0, -25, 19, 20, 25, 30, 45, 20};
  for(int i = 0 ; i < N ; i++) {
    if(i==0 && i+1 < N){
      if( abs( Number[i] - Number[i+1] ) < 10 ) {
        cout << Number[i] << endl;
      }
    } else if(i==N-1 && i>0){
      if( abs( Number[i] - Number[i-1] ) < 10) {
        cout << Number[i] << endl;
      }
    } else if (( abs( Number[i] - Number [i+1]) < 10) && ( abs( Number[i] - Number [i-1] ) < 10 )) {
      cout << Number[i] << endl;
    }
  }
  return 1;
}