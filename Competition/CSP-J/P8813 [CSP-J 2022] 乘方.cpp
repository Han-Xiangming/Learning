#include <bits/stdc++.h>
#define ll long long
#define file(x) freopen(#x".in",'r',stdin),freopen(#x".out",'w',stdout);
using namespace std;
int main(){
    ll a,b,sum=1;
    cin >> a >> b;
    for (int i = 0;i<b;i++){
        sum*=a;
        if (sum>1e9){
            cout << -1;
            return 0;
        }
    }
}