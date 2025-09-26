#include <iostream>
using namespace std;

int main() {
    const double MILES_TO_KM = 1.609;

    cout << "Miles   Kilometers" << endl;

    for (int miles = 1; miles <= 10; ++miles) {
        double km = miles * MILES_TO_KM;
        cout << miles << "       " << km << endl;
    }

    return 0;
}
