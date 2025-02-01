#include <iostream>
using namespace std;
#define ll long long
ll qucik_pow(int a,int b,int p){
    ll ret=1;
    while(b){
        if (b%2==1) ret=ret*a%p;
        a=a*a%p;
        b /= 2;
    }
    return ret;
}
int main(){
    ll a,b,p;
    cin >> a >> b >> p;
    cout << a << '^' << b << " mod " << p << '=' << qucik_pow(a,b,p);
}