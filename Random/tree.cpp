#include <cstdlib>
#include <ctime>
using namespace std;
int random(int n){
	return (long long)rand()*rand()%n;
}

int main(){
	srand((unsigned)time(0));
	
}
