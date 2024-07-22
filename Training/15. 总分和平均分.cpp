// 目标
// 期末考试成绩出来了，小明同学语文、数学、英语分别考了x、y、z分，
// 请编程帮助小明计算一下，他的总分和平均分分别考了多少分？
// 输入描述
// 三个整数x、y、z分别代表小明三科考试的成绩。
// 输出描述
// 第1行有一个整数，代表总分，第2行有一个小数（保留1位小数）代表平均分。
#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int a,b,c;
    cin >> a >> b >> c;
    cout << a+b+c << endl;
    cout << fixed << setprecision(1)<< (a+b+c)/3.0 << endl;
    return 0;
}