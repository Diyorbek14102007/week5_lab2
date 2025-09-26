#include <iostream>
using namespace std;

int main() {

    int n, i;
    float sum = 0.0;

    cout<< " Enter the number: ";
    cin>>n;

    for(i=1; i<=n; i++) {

        if (i<n) {
            cout<< "1/"<<i<<" + ";
            sum+= 1/(float)i;
        }

        if (i==n) {
            cout<<"1/"<<i;
            sum+=1/(float)i;
            cout<<"\n the sum is "<< sum;
        }
    }

    return 0;
}