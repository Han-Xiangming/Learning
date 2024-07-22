// 目标：小明去超市买了若干斤水果，你能根据水果的单价，小明买的水果数量，编一个程序计算机出总金额，并打印出清单。
// 输入描述: 第一行商品的单价，是一个小数
//           第二行商品的数量，是一个整数
// 输出描述:
// 一行，商品的单价，数量，及金额，中间用空格隔开。单价保留两位小数，总金额去掉小数。数量为整数。
// 示例1:
// 输入：3.55
//       3
// 输出： 3.55 3 10
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    double price; // 单价
    int quantity; // 数量
    
    // 输入单价和数量
    cin >> price >> quantity;
    
    // 计算总金额，保留两位小数
    double total = static_cast<double>(quantity) * price;
    cout << fixed << setprecision(2) << price << " " << quantity << " " << int(total) << endl;
    
    return 0;
}