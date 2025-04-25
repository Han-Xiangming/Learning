#include <cstdlib>
#include <ctime>
#include <vector>
#include <iostream>

using namespace std;
int random(int n){
	return (long long)rand()*rand()%n;
}

int main(){
	freopen("1.txt","w",stdout);
	vector<long long> a;
	srand((unsigned)time(0));
	int n=random(1e+5)+1;
	int m = 1e+9;
	for(int i=1;i<=n;i++) a[i] = random(2*m+1)-m;
	for(auto i:a) cout << i << " ";
	return 0;
}
