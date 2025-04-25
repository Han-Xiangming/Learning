#include <iostream>
#include <vector>
using namespace std;

int n, k;
vector<int> nums;
int result = 0;

long long pow_mod(long long a, long long d, long long mod) {
    long long result = 1;
    a = a % mod;
    while (d > 0) {
        if (d % 2 == 1) {
            result = (result * a) % mod;
        }
        a = (a * a) % mod;
        d /= 2;
    }
    return result;
}

bool is_prime(long long n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0) return false;
    long long d = n - 1;
    int s = 0;
    while (d % 2 == 0) {
        d /= 2;
        s++;
    }
    vector<int> bases = {2, 3, 5, 7, 11, 13, 17};
    for (int a : bases) {
        if (a >= n) continue;
        long long x = pow_mod(a, d, n);
        if (x == 1 || x == n - 1) continue;
        bool possible = false;
        for (int r = 1; r < s; r++) {
            x = (x * x) % n;
            if (x == n - 1) {
                possible = true;
                break;
            }
        }
        if (!possible) return false;
    }
    return true;
}

void backtrack(int start, int count, long long sum) {
    if (count == k) {
        if (is_prime(sum)) {
            result++;
        }
        return;
    }
    for (int i = start; i < n; i++) {
        backtrack(i + 1, count + 1, sum + nums[i]);
    }
}

int main() {
    cin >> n >> k;
    nums.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    backtrack(0, 0, 0);
    cout << result << endl;
    return 0;
}
