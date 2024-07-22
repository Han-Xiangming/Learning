// 目标
// 请输出一个两位的整数n，倒过来的数，也就是输出这个两位数个位和十位颠倒的结果。
// 比如：整数23倒过来是32，整数18倒过来是81，整数20倒过来是2。
// 输入描述
// 两位整数n。
// 输出描述
// n倒过来的整数。
#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a = n/10;
    int b = n-a*10;
    cout << a+b*10 << endl;
}