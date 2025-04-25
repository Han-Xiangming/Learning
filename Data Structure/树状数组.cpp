#include <vector>
#include <iostream>
using namespace std;
#define lowbit(x) (x&-x);
template <typename T>
class FenwickTree{
private:
	vector<T> tree;
	int n;
	
public:
	// 构造函数，初始化大小为 size 的树状数组
	FenwickTree(int size) : tree(size + 1,0), n(size){}
	
	// 单点更新：在 index 位置增加 delta
	void update(int index,T delta){
		while (index <= n){
			tree[index] += delta;
			index += lowbit(index); // 找到父节点
		}
	}
	
	// 前缀查询： 查询 [1, index] 的和
	int query(int index){
		int res;
		while (index > 0){
			res += tree[index];
			index -= lowbit(index); // 移动到前一个区间
		}
		return res;
	}
	
	// 区间查询： 查询 [l,r] 的和
	int rangeQuery(int l,int r){
		return query(r)-query(l-1);
	}
	
	
};
