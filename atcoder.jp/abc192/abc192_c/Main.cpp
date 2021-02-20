#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
typedef long long ll;


int reverse(int num){
	vector<int>x;
	while(0 < num){
		x.push_back(num % 10);
		num /= 10;
	}
	sort(x.begin(), x.end(), greater<int>());
	int ans = 0;
	rep(i, x.size()){
		ans *= 10;
		ans += x[i];
	}
	return ans;
}


int sort(int num){
	vector<int>x;
	while(0 < num){
		x.push_back(num % 10);
		num /= 10;
	}
	sort(x.begin(), x.end());
	int ans = 0;
	rep(i, x.size()){
		ans *= 10;
		ans += x[i];
	}
	return ans;
}


int func(int num){
	int g1 = reverse(num);
	int g2 = sort(num);
	return g1 - g2;
}

int main(void){
	int n, k;
	cin >> n >> k;

	int ans = n;
	rep(i, k){
		ans = func(ans);
	}
	cout << ans << endl;
	return 0;
}