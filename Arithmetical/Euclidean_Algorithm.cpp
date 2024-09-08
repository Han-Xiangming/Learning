#include <iostream>
using namespace std;
// 定义一个函数来计算两个数的最大公约数
int gcd(int a, int b) {
    // 当b为0时，a即为最大公约数
    return (b == 0) ? a : gcd(b, a % b);
}

int main() {
    int num1 = 48, num2 = 18;
    cout << "The GCD of " << num1 << " and " << num2 << " is " << gcd(num1, num2) << std::endl;
    return 0;
}