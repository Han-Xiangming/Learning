// 目标：假设小明的妈妈向公司请了n天的假，那么请问小明的妈妈总共请了多少小时的假，多少分钟的假？（提示：1天有24小时，1小时有60分钟）
// 输入描述: 一个整数n，代表小明妈妈请假的天数。
// 输出描述: 两两个整数，每行1个，第1行的整数代表小明妈妈请假的小时数，第2行的整数代表小明妈妈请假的分钟数。
// 示例1:
// 输入：1
// 输出： 24
//        1440
#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int hour = n*24;
    cout << hour << endl << 1440*n << endl;
    return 0;
}