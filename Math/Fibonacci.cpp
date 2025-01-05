#include <iostream>
#include <vector>

using namespace std;
#define file(x) freopen(#x ".in", "r", stdin), freopen(#x ".out", "w", stdout);

// 计算斐波那契数列中第 n 个数
int fibonacci(int n)
{
    if (n <= 2)
        return 1;
    vector<int> fib(n + 1);
    fib[1] = 1;
    fib[2] = 1;
    for (int i = 3; i <= n; ++i)
        fib[i] = fib[i - 1] + fib[i - 2];
    return fib[n];
}

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int a;
        cin >> a;
        cout << fibonacci(a) << endl;
    }
    return 0;
}