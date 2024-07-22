// 目标：米老鼠发现了厨房放了n颗糖果，它一次可以背走a颗，请问米老鼠背了x次之后还剩多少颗？（假设x次之后一定有糖果剩下）
// 输入描述: 三个整数n、a、x分别代表总共有n颗糖果，米老鼠一次背走a颗糖果，总共背了x次。
// 输出描述: 一个整数，代表剩余的糖果数量。
// 示例1:
// 输入：12 2 3
// 输出： 6
#include <iostream>
using namespace std;
int main(){
    int n,a,x;
    cin >> n >> a >> x;
    int res = n - a * x;
    cout << res << endl;
    return 0;
}