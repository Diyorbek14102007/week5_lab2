#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    double sum = 0.0;
    for (int k = 0; k < n; k++) {
        if (k % 2 == 0)
            sum += 1.0 / (2 * k + 1);
        else
            sum -= 1.0 / (2 * k + 1);
    }

    double pi = 4 * sum;
    cout << "Pi approximation = " << pi << endl;
    return 0;
}