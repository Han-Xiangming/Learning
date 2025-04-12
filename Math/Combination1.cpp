#include <iostream>
using namespace std;

// 函数用于计算阶乘
unsigned long long factorial(int n) {
    unsigned long long result = 1;
    for (int i = 2; i <= n; ++i) {
        result *= i;
    }
    return result;
}

// 函数用于计算组合数C(n, k)
unsigned long long combination(int n, int k) {
    if (k > n) return 0; // 如果k大于n，组合数为0
    return factorial(n) / (factorial(k) * factorial(n - k));
}

int main() {
    int n, k;
    cout << "请输入n和k的值（n >= k）：";
    cin >> n >> k;

    unsigned long long result = combination(n, k);
    cout << "C(" << n << ", " << k << ") = " << result << endl;

    return 0;
}