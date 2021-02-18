#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)


int main(void){
	int n;
	cin >> n;
	vector<vector<int> >a(2, vector<int>(n));
	rep(i, 2){
		rep(j, n){
			cin >> a[i][j];
		}
	}

	vector<int>ans(n);
	rep(i, n){
		int j, k;
		for(j = 0; j <= i; j++){
			ans[i] += a[0][j];
		}
		for(k = j - 1; k < n; k++){
			ans[i] += a[1][k];
		}
	}

	int max = *max_element(ans.begin(), ans.end());
	cout << max << endl;
	return 0;
}