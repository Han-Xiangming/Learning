#include <bits/stdc++.h>
using namespace std;
#define file(x) freopen(#x".in", "r", stdin),freopen(#x".out", "w", stdout);
#define optimition ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define ll long long
const int N = 1e6 + 10;
const ll mod = 1e9 + 7;
ll fac[N], inv[N];

// �����ݺ��������� a^b % mod
ll qpow(ll a, ll b) {
    ll res = 1;
    while (b) {
        if (b & 1) res = (__int128)res * a % mod;  // ���b�ĵ�ǰλΪ1����������Ե�ǰ��a
        a = (__int128)a * a % mod;  // a�Գˣ�׼����һλ
        b >>= 1;  // b����һλ
    }
    return res;
}

// ��ʼ���׳��������Ԫ����
void init() {
    // ����׳�����
    fac[0] = 1;
    for (int i = 1; i < N; i++) {
        fac[i] = fac[i - 1] * i % mod;  // fac[i] = i!
    }
    // ����׳���Ԫ����
    inv[N - 1] = qpow(fac[N - 1], mod - 2);  // ����С��������Ԫ
    for (int i = N - 2; i >= 0; i--) {
        inv[i] = inv[i + 1] * (i + 1) % mod;  // ���Ƽ���ÿ�����Ľ׳���Ԫ
    }
}

// ��������� C(n,m) % mod
ll C(int n, int m) {
    if (m < 0 || m > n) return 0;  // �Ƿ����뷵��0
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

