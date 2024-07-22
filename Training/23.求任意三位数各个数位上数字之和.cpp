// 目标
// 对于一个任意的三位自然数X，编程计算其各个数位上的数字之和S。
// 输入描述
// 输入一行，只有一个整数x(100<=x<=999) 
// 输出描述
// 输出只有一行，包括1个整数

#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a = n/100;
    int b = (n-a*100)/10;
    int c = n-a*100-b*10;
    cout << a+b+c << endl;
}