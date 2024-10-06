#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
#define ll long long
ll a[23],n,i=0;
int main() {
    cin >> n;
    if (n&1){
        cout << -1;
        return 0;
    }
    while (n != 0) {
        a[i] = n % 2;
        i++;
        n = ceil(n/2);
    }
    for (int j = i-1;j>=0;j--){
        if (a[j]){
            cout << fixed << setprecision(1) << (int)pow(2,j) << " ";
        }
    }
    
}
