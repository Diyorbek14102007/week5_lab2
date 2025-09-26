#include <iostream>
using namespace std;

int main() {
    int n = 0;
    int power = 1;  // 2^0 = 1

    while (power * 2 < 30000) {
        power *= 2;
        n++;
    }

    cout << "The largest integer n such that 2^n < 30000 is: " << n << endl;

    return 0;
}
