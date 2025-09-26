#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter seconds: ";
    cin >> n;

    for (int i = n - 1; i > 0; i--) {
        cout << i << " seconds remaining" << endl;
    }

    cout << "Stopped" << endl;
    return 0;
}