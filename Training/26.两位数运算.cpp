// 目标
// 小丽在编程课上学会了拆位运算，她已经可以拆出一个两位整数的十位和个位了，
// 她想知道这个整数的十位/个位的结果是多少，请编程帮她实现？（请注意，计算结果要保留1位小数）
// 输入描述
// 输入一个两位的正整数n，且n的个位一定不为0。
// 输出描述
// 输出这个两位正整数十位除以个位的计算结果，结果保留1位小数。
#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a = n / 10;
    int b = n % 10;
    float result = static_cast<float>(a) / b;
    cout << fixed << setprecision(1) << result << endl;

}