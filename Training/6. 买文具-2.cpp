// 目标：花花去文具店买了1支笔和1块橡皮，已知笔x元/支，橡皮y元/块，花花付给了老板n元，请问老板应该找给花花多少钱？
// 输入描述: 三个整数x、y、n，分别代表了笔的单价、橡皮的单价和花花付给老板的钱（已知花花付给老板的钱n>=x+y）。 
// 输出描述: 一个整数，代表老板应该找给花花的钱。 
// 示例1:
// 输入：2 1 10
// 输出： 7
#include <iostream>
using namespace std;
int main(){
    int x,y,n;
    cin >>x>>y>>n;
    cout<<n-x-y<<endl;
    return 0;
}