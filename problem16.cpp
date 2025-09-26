#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double monthly = 1000;
    double rate = 0.03;
    double total5 = 0;

    for (int year = 1; year <= 5; year++) {
        double monthThisYear = monthly * pow(1 + rate, year - 1);
        double yearTotal = monthThisYear * 12;
        cout << "Year " << year
             << " - Monthly rent: " << monthThisYear
             << "  |  Total that year: " << yearTotal << endl;
        total5 += yearTotal;
    }

    double rentInFiveYears = monthly * pow(1 + rate, 5);
    cout << "\nMonthly rent in 5 years: " << rentInFiveYears << endl;
    cout << "Total rent for 5 years: " << total5 << endl;

    return 0;
}