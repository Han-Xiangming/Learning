#include <bits/stdc++.h>
using namespace std;
#define int long long

inline int read() {
	int x = 0, f = 1;
	char c = getchar();
	while (c < '0' || c > '9') {
		if (c == '-')f = -1;
		c = getchar();
	}
	while (c >= '0' && c <= '9') {
		x = x * 10 + c - '0';
		c = getchar();
	}
	return x*f;
}

struct HNode {
	int weight;
	HNode *lchild, *rchild;
};

using Htree = HNode*;
Htree createHuffmanTree(int arr[], int n) {
	Htree forest[N];
	Htree root = NULL;
	for (int i = 0; i < n; i++) {  // 将所有点存入森林
		Htree temp;
		temp = (Htree)malloc(sizeof(HNode));
		temp->weight = arr[i];
		temp->lchild = temp->rchild = NULL;
		forest[i] = temp;
	}

	for (int i = 1; i < n; i++) {  // n-1 次循环建哈夫曼树
		int minn = -1, minnSub;  // minn 为最小值树根下标，minnsub 为次小值树根下标
		for (int j = 0; j < n; j++) {
			if (forest[j] != NULL && minn == -1) {
				minn = j;
				continue;
			}
			if (forest[j] != NULL) {
				minnSub = j;
				break;
			}
		}

		for (int j = minnSub; j < n; j++) {  // 根据 minn 与 minnSub 赋值
			if (forest[j] != NULL) {
				if (forest[j]->weight < forest[minn]->weight) {
					minnSub = minn;
					minn = j;
				} else if (forest[j]->weight < forest[minnSub]->weight) {
					minnSub = j;
				}
			}
		}

		// 建新树
		root = (Htree)malloc(sizeof(HNode));
		root->weight = forest[minn]->weight + forest[minnSub]->weight;
		root->lchild = forest[minn];
		root->rchild = forest[minnSub];

		forest[minn] = root;     // 指向新树的指针赋给 minn 位置
		forest[minnSub] = NULL;  // minnSub 位置为空
	}
	return root;
}
int getWPL(Htree root, int len) {  // 递归实现，对于已经建好的霍夫曼树，求 WPL
	if (root == NULL)
		return 0;
	else {
		if (root->lchild == NULL && root->rchild == NULL)  // 叶节点
			return root->weight * len;
		else {
			int left = getWPL(root->lchild, len + 1);
			int right = getWPL(root->rchild, len + 1);
			return left + right;
		}
	}
}
void huffmanCoding(Htree root, int len, int arr[]) {  // 计算霍夫曼编码
	if (root != NULL) {
		if (root->lchild == NULL && root->rchild == NULL) {
			printf("结点为 %d 的字符的编码为: ", root->weight);
			for (int i = 0; i < len; i++) printf("%d", arr[i]);
			printf("\n");
		} else {
			arr[len] = 0;
			huffmanCoding(root->lchild, len + 1, arr);
			arr[len] = 1;
			huffmanCoding(root->rchild, len + 1, arr);
		}
	}
}
