// 目标
// 从键盘读入一个两位的整数n，请求出这个两位整数个位和十位的和是多少？
// 输入描述
// 一个两位的整数n。
// 输出描述
// 一个整数，代表n个位和十位的和。
#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a = n/10;
    int b = n-a*10;
    cout << a+b << endl;
}