// 目标
// 小兔朱迪挖了x个胡萝卜，狐狸尼克挖到胡萝卜数量是小兔挖到的3倍，
// 小羊肖恩挖到胡萝卜的数量比狐狸尼克少8个；
// 请你编程计算一下狐狸尼克和小羊肖恩分别挖了几个胡萝卜，
// 以及平均每个动物挖了几个胡萝卜？
// 输入描述
// 一个整数x代表小兔挖走的胡萝卜的数量。
// 输出描述
// 三个数，每行1个，第1个整数代表狐狸尼克挖走的胡萝卜的数量，
// 第2个整数代表小羊肖恩挖走的胡萝卜的数量，
// 第3个数是小数代表平均每个动物挖走了几个胡萝卜（结果保留1位小数）。
#include <iostream>
#include <iomanip> // 引入头文件以使用setprecision
using namespace std;
int main() {
    int x;
    cin >> x;

    // 计算狐狸尼克挖到的胡萝卜数量
    int fox_nick_carrots = 3 * x;

    // 计算小羊肖恩挖到的胡萝卜数量
    int sheep_shawn_carrots = fox_nick_carrots - 8;

    // 计算总共挖到的胡萝卜数量
    int total_carrots = x + fox_nick_carrots + sheep_shawn_carrots;

    // 计算平均每个动物挖到的胡萝卜数量（保留1位小数）
    double avg_carrots_per_animal = static_cast<double>(total_carrots) / 3.0;
    // 输出狐狸尼克和小羊肖恩挖到的胡萝卜数量
    cout << fox_nick_carrots << endl;
    cout << sheep_shawn_carrots << endl;
    cout << fixed << setprecision(1) << avg_carrots_per_animal << endl;


    return 0;
}
