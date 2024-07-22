// 目标：伦敦奥运会要到了，小明在拼命练习游泳准备参加游泳比赛。这一天，小明给自己的游泳时间做了精确的计时（本题中的计时都按24小时制计算），它发现自己从a时b分一直游泳到当天的c时d分，请你帮小明计算一下，它这天一共游了多少时间呢？
// 输入描述: 一行内输入4个整数，分别表示a,b,c,d。
// 输出描述: 一行内输出2个整数e和f，用空格间隔，依次表示小明这天一共游了多少小时多少分钟。其中表示分钟的整数f应该小于60。
// 示例1:
// 输入：12 50 19 10
// 输出： 6 20
#include <iostream>
using namespace std;
int main(){
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    int e = c - a;
    int f = d - b;
    if(f < 0){
        e--;
        f = 60 + f;
    }
    cout << e << " " << f;
}