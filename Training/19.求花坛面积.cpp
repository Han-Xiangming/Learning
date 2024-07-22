// 目标
// 龙湖校区有一个圆形花坛，量得花坛周围的篱笆长是x米，
// 请问该花坛的面积是多少平方米？（假设π=3.14）（5.2.99）
// 输入描述
// 一个小数x
// 输出描述
// 花坛的面积（结果保留2位小数）
// 提示
// 圆的面积和周长求解公式分别如下；
//  圆的面积S = π * 半径 * 半径；（π读作pài，π = 3.1415926…，
//  在具体的题目中π的值精确到小数点后多少位，取决于具体的题目）
//  圆的周长C = π * 2 * 半径；
#include <iostream>
#include <iomanip> // 引入头文件以使用setprecision
using namespace std;
int main() {
    double fence_length;
    const double pi = 3.14; // 假设π值为3.14

    cin >> fence_length;

    // 根据圆的周长公式计算半径
    double radius = fence_length / (2 * pi);

    // 计算花坛面积
    double area = pi * radius * radius;

    // 输出结果，保留2位小数
    cout << fixed << setprecision(2) << area << endl;

    return 0;
}