// 目标
// 梯形面积的求解公式为 S = (a + b) * h / 2。
// 从键盘读入一个梯形的上底a、下底b和高h，请计算表梯形的面积。（结果保留1位小数）（5.1.15）
// 输入描述
// 三个整数a、b、h
// 输出描述
// 梯形的面积
#include <iostream>
#include <iomanip> // 引入头文件以使用setprecision
using namespace std;
int main() {
    int a, b, h;
    cin >> a >> b >> h;

    // 计算梯形面积
    double trapezoid_area = (a + b) * static_cast<double>(h) / 2.0;

    // 输出结果，保留1位小数
    cout << fixed << setprecision(1) << trapezoid_area << endl;

    return 0;
}