#include <bits/stdc++.h>
using namespace std;
#define file(x) freopen(#x".in", "r", stdin),freopen(#x".out", "w", stdout);
#define optimition ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define ll long long
const int N = 1e6 + 10;
const ll mod = 1e9 + 7;
ll fac[N], inv[N];

// 快速幂函数：计算 a^b % mod
ll qpow(ll a, ll b) {
    ll res = 1;
    while (b) {
        if (b & 1) res = (__int128)res * a % mod;  // 如果b的当前位为1，将结果乘以当前的a
        a = (__int128)a * a % mod;  // a自乘，准备下一位
        b >>= 1;  // b右移一位
    }
    return res;
}

// 初始化阶乘数组和逆元数组
void init() {
    // 计算阶乘数组
    fac[0] = 1;
    for (int i = 1; i < N; i++) {
        fac[i] = fac[i - 1] * i % mod;  // fac[i] = i!
    }
    // 计算阶乘逆元数组
    inv[N - 1] = qpow(fac[N - 1], mod - 2);  // 费马小定理求逆元
    for (int i = N - 2; i >= 0; i--) {
        inv[i] = inv[i + 1] * (i + 1) % mod;  // 递推计算每个数的阶乘逆元
    }
}

// 计算组合数 C(n,m) % mod
ll C(int n, int m) {
    if (m < 0 || m > n) return 0;  // 非法输入返回0
    return fac[n] * inv[m] % mod * inv[n - m] % mod;  // C(n,m) = n! / (m! * (n-m)!)
}

int main() {
    optimition
    init();
    int n, m;
    cin >> n >> m;
    cout << C(n, m) << "\n";
    return 0;
}

