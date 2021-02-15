#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)


int main(void){
	vector<int>x(3);
	rep(i, 3)cin >> x[i];

	int ans = 0;
	int check[3];
	rep(i, 3)check[i] = x[i] % 2;

	if(check[0] + check[1] + check[2] == 1){
		rep(i, 3){
			if(check[i] == 0)x[i]++;
		}
		ans++;
	}else if(check[0] + check[1] + check[2] == 2){
		rep(i, 3){
			if(check[i] == 1)x[i]++;
		}
		ans++;
	}

	sort(x.begin(), x.end());

	while(x[0] != x[1] || x[1] != x[2]){
		if(x[0] < x[2]){
			x[0] += 2;
			ans++;
		}
		if(x[1] < x[2]){
			x[1] += 2;
			ans++;
		}
	}
	cout<< ans << endl;
	return 0;
}