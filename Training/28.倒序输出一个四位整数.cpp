// 目标
// 任意读入一个四位整数，颠倒后输出。
// 输入描述
// 输入一行，只有一个整数x(1000<=x<=9999)。
// 输出描述
// 输出只有一行，包括1个整数。
#include <iostream>
using namespace std;

int main(){
    int x;
    cin >> x;
    cout << x%10*1000 + x/10%10*100 + x/100%10*10 + x/1000;   
}