//小雅刚刚考完语文、数学、英语的三门期中考试，她想请你编个程序来帮她算算她的平均分，
// 要求输入三个正整数，分别表示三科考试的分数，输出它们的平均值。
// 输入描述
// 一行，包括三个正整数，两两之间用一个空格分隔。
// 输出描述
// 一个正整数，表示平均值，要求输出结果保留一位小数。
#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int a,b,c;
    cin >> a >> b >> c;
    cout << fixed << setprecision(3)<< (a+b+c)/3.0 << endl;
    return 0;
}