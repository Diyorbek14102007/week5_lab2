#include <iostream>
using namespace std;

int main() {
    int binary, decimal = 0;
    cout << "Enter a binary number: ";
    cin >> binary;

    while (binary > 0) {
        decimal = decimal * 2 + (binary % 10);  // shift left and add last digit
        binary /= 10;
    }

    cout << "The decimal number is " << decimal << endl;
    return 0;
}