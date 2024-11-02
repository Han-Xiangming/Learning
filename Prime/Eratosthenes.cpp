#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool isPrime[1000001];
void Eratosthenes(ll n){
    memset(isPrime, true, sizeof(isPrime));
    isPrime[0] = isPrime[1] = false;
    for (ll i = 2; i * i <= n; i++) {
        if (isPrime[i]) {
            for (ll j = i * i; j <= n; j += i) isPrime[j] = false;
        }
    }
}


int main() {
    ll n;
    cin >> n;
    Eratosthenes(n);
    for (ll i = 0; i <= n; i++) if (isPrime[i]) cout << i << " ";
    cout << endl;
    return 0;
}