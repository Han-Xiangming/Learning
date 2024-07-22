// 目标
// 输入一个三位正整数，然后与它倒过来的数相加，输出和。
//  如：输入167，则和为167+761=928
// 输入描述
// 只有一行，一个三位正整数。
// 输出描述
// 一个正整数
#include <iostream>

// 使用标准命名空间
using namespace std;

int main() {
    int input;
    cin >> input;

    // 检查输入是否为三位正整数
    if (input < 100 || input > 999) {
        cout << "Invalid input. Please enter a three-digit positive integer." << endl;
        return 1;
    }

    // 分解出各位数字
    int hundreds = input / 100;
    int tens = (input % 100) / 10;
    int units = input % 10;

    // 创建倒序数字
    int reversed_number = units * 100 + tens * 10 + hundreds;

    // 计算和
    int sum = input + reversed_number;

    cout << sum << endl;

    return 0;
}
