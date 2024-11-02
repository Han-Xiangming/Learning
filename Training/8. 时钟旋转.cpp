// 目标：时钟上面的时针从m时走到n时旋转了多少度？（m<=n，且m和n都是1~12之间的整数）（4.2.4）
// 输入描述: 2个整数m和n
// 输出描述: 一个整数代表时针旋转的度数
// 示例1:
// 输入：1 4
// 输出： 90
#include <iostream>
using namespace std;
int main(){
    int m,n;
    cin >> m >> n;
    int p = n-m;
    cout << p*30;
    return 0;
}