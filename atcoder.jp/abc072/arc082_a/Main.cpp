#include <iostream>
#include <algorithm>
#include <map>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define SIZE 1000000


int main(void){
	int n;
	cin >> n;
	int x[SIZE] ={0};
	rep(i, n){
		int num;
		cin >> num;
		x[num]++;
	}

	int ans = -1;
	for(int i = 1; i < SIZE - 1; i++){
		ans = max(ans, x[i - 1] + x[i] + x[i + 1]);
	}
	
	cout << ans << endl;
	return 0;
}