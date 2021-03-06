#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)


int main(void){
	int n;
	cin >> n;
	vector<vector<int> >data(2, vector<int>(n));
	rep(i, n)cin >> data[0][i] >> data[1][i];

	sort(data.begin(), data.end());
	int ans = 10000000;
	rep(i, n){
		rep(j, n){
			int tmp;
			if(i == j)tmp = data[0][i] + data[1][j];
			else tmp = max(data[0][i], data[1][j]);
			ans = min(ans, tmp);
		}
	}
	cout << ans << endl;
	return 0;
}