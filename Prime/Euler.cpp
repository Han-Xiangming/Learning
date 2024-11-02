#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool isPrimes[1000000];
ll tot, primes[1000000];
void Euler(ll n) {
    memset(isPrimes, true, sizeof(isPrimes));
    isPrimes[0] = isPrimes[1] = false;
    for (ll i = 2; i <= n; i++) {
        if (isPrimes[i]) primes[++tot] = i;
        for (ll j = 1; j <= tot && i * primes[j] <= n; j++) {
            isPrimes[i * primes[j]] = false;
            if (i % primes[j] == 0) break;
        }
    }
}

int main() {
    ll n;
    cin >> n;
    Euler(n);
    cout << tot << endl;
    for (ll i = 1; i <= tot; i++) cout << primes[i] << " ";
    return 0;
}