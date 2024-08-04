#include<iostream>
using namespace std;
// 定义两个二维数组，用于表示迷宫的地图和探索状态
int a[105][105],b[105][105], n;
// 定义布尔变量f，用于标记是否找到出口
bool f=false;
// 定义四个方向的行列偏移量，用于探索周围的格子
int di[5] = {-1,0,1,0},dj[5] = {0,1,0,-1}; 

// 深度优先搜索函数，用于探索从当前位置(i, j)开始的路径
void dfs(int i, int j)
{
    // 如果当前位置是终点，设置f为true并返回
    if(a[i][j]==2)
    {
        f=true;
        return; 
    }
    // 遍历四个方向
    for (int k = 0; k < 4; k++){
        // 计算新的位置
        int ni = i + di[k], nj = j + dj[k];
        // 如果新的位置有效且不是墙，并且没有被探索过
        if(ni >= 1 && ni <= n && nj >= 1 && nj <= n && a[ni][nj] != 1 && b[ni][nj] == 0)
        {
            // 标记新的位置为已探索
            b[ni][nj] = 1;
            // 递归探索新的位置
            dfs(ni,nj);
            // 回溯，重置新的位置的探索状态
            b[ni][nj] = 0;
        }
    }
} 

// 主函数
int main()
{
    // 读取迷宫的大小
    cin>>n;
    // 读取迷宫的地图
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            cin >> a[i][j];
        }
    }
    // 如果起点就是终点，直接输出"yes"并结束程序
    if(a[1][1] == 2)
    {
        cout << "yes";
        return 0;
    } else {
        // 标记起点为已探索
        b[1][1] = 1;
        // 从起点开始深度优先搜索
        dfs(1,1);
        // 根据f的值输出结果
        cout << (f ? "yes" : "no");
    }
}


// 3
// 0 1 0
// 0 0 0
// 0 1 2