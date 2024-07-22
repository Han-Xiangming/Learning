// 目标：编一程序，将摄氏温度换为华氏温度。公式为：f=9/5*c+32。其中f为华氏温度,c是摄氏温度。（5.2.12）
// 输入描述: 输入一行，只有一个整数c
// 输出描述: 输出只有一行，包括1个实数。（保留两位小数）
// 示例1:
// 输入：50
// 输出： 122.00
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
  double c;
  cin >> c;
  float f = (c * 9 / 5) + 32;
    cout << fixed << setprecision(2) << f << endl;
  return 0;
}