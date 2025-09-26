#include <iostream>
using namespace std;

int main() {
    int n; if(!(cin >> n)) return 0;
    if(n == 0) {
        cout << "The depth is 0\n";
        return 0;
    }
    for(int i = 1; i <= n; ++i) {
        for(int j = 0; j < i; ++j) cout << i;
        cout << '\n';
    }
    return 0;
}