// 目标
// 从键盘读入一个5位的正整数，请求出这个5位数的各个位之和；
// 输入描述
// 一个5位的正整数n
// 输出描述
// 这个5位数的各个位之和
#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    cout << n % 10 + n / 10 % 10 + n / 100 % 10 + n / 1000 % 10 + n / 10000 % 10;
}