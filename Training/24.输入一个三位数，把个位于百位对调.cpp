// 目标
// 输入一个三位自然数，然后把这个数的百位数与个位数对调，输出对调后的数
// 输入描述
// 输入一行，只有一个整数x(100<=x<=999)。
// 输出描述
// 输出只有一行，包括1个整数。
#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a = n/100;
    int b = (n-a*100)/10;
    int c = n-a*100-b*10;
    cout << a+b*10+c*100 << endl;
}