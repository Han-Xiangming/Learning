#include <bits/stdc++.h>
using namespace std;
#define PII pair<int,int>

int n;
int mp[35][35];
bool vis[35][35];
int dx[4] = {0, 1, 0, -1}, dy[4] = {1, 0, -1, 0};

void bfs(int x, int y) {
	queue<PII> q;
	q.push({x, y});
	vis[x][y] = true;
	
	while (!q.empty()) {
		PII f = q.front();
		q.pop();
		for (int i = 0; i < 4; i++) {
			int nx = f.first + dx[i];
			int ny = f.second + dy[i];
			if (nx >= 1 && nx <= n && ny >= 1 && ny <= n && !vis[nx][ny] && mp[nx][ny] == 0) {
				vis[nx][ny] = true;
				q.push({nx, ny});
			}
		}
	}
}

int main() {
	cin.tie(0);
	cout.tie(0);
	ios::sync_with_stdio(false);
	cin >> n;
	
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cin >> mp[i][j];
			if (mp[i][j] == 1) vis[i][j] = true; // 标记1的位置不需要处理
		}
	}
	
	// 从边界上的0开始BFS
	for (int i = 1; i <= n; i++) {
		if (mp[i][1] == 0 && !vis[i][1]) bfs(i, 1);
		if (mp[i][n] == 0 && !vis[i][n]) bfs(i, n);
	}
	for (int j = 1; j <= n; j++) {
		if (mp[1][j] == 0 && !vis[1][j]) bfs(1, j);
		if (mp[n][j] == 0 && !vis[n][j]) bfs(n, j);
	}
	
	// 将未被访问过的0改为2
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (mp[i][j] == 0 && !vis[i][j]) {
				mp[i][j] = 2;
			}
		}
	}
	
	// 输出结果
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cout << mp[i][j] << " ";
		}
		cout << "\n";
	}
	
	return 0;
}
