// 目标：从键盘读入2个整数，分别代表一个长方形的长和宽，请计算长方形的周长和面积；
// 输入描述: 从键盘读入2个整数，用空格隔开
// 输出描述: 两个整数，用空格隔开，第一个整数代表可以分到的班级的数量，第二个整数代表剩余的跳绳数量
// 示例1:
// 输入：2 3
// 输出： 10
//        6
#include <iostream>
using namespace std;
int main() {
  int a, b;
  cin >> a >> b;
  int res = (a + b) * 2;
  int left = a * b;
  cout << res << endl << left << endl;
  return 0;
}