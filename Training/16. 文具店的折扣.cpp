// 目标
// 花花去文具店买了1支笔和1块橡皮，已知笔x元/支，橡皮y元/块，文具店今天有活动，
// 可以给顾客打9折（用购买总价 * 0.9），花花付给了老板n元，请问老板应该找给花花多少钱？
// 输入描述
// 三个整数x、y、n，分别代表了笔的单价、橡皮的单价和花花付给老板的钱（已知花花付给老板的钱n>=x+y）
// 输出描述
// 一个小数（保留1位小数），代表老板应该找给花花的钱
#include <iostream>
#include <iomanip> // 引入头文件以使用setprecision
using namespace std;
int main() {
    int x, y, n;
    cin >> x >> y >> n;

    // 计算打折后的总价
    double total_cost = (x + y) * 0.9;

    // 计算老板应该找给花花的钱
    double change = n - total_cost;

    // 保留1位小数输出结果
    cout << fixed << setprecision(1) << change << endl;

    return 0;
}