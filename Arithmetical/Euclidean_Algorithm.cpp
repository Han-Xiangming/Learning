#include <iostream>
using namespace std;
// ����һ�����������������������Լ��
int gcd(int a, int b) {
    // ��bΪ0ʱ��a��Ϊ���Լ��
    return (b == 0) ? a : gcd(b, a % b);
}

int main() {
    int num1 = 48, num2 = 18;
    cout << "The GCD of " << num1 << " and " << num2 << " is " << gcd(num1, num2) << std::endl;
    return 0;
}