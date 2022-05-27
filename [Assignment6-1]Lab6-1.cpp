#include <iostream>

using namespace std;

bool is_prime(int n) {

int k = 2;

while (n / k >= k) {

if (n % k == 0) {

return false;

}

++k;

}

return n > 1;

}

int main() {

for (int n = 1; n <= 40; ++n) {

if (is_prime(n)) {

cout << n << endl;

}

}

return 0;

}

