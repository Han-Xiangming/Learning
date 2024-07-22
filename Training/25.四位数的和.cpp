// 目标
// 请从键盘读入一个四位整数，求这个四位整数各个位的和是多少？
// 输入描述
// 一个四位整数n
// 输出描述
// 这个四位数各个位的和
#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a = n / 1000;
    int b = n / 100 % 10;
    int c = n / 10 % 10;
    int d = n % 10;
    cout << a+b+c+d << endl;
}