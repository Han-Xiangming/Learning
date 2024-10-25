#include <bits/stdc++.h>
using namespace std;
#define file(x) freopen(#x".in",'r',stdin),freopen(#x".out",'w',stdout);
#define optimition ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define ll long long
ll a[23],n,i=0;
int main() {
    optimition;
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
