#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define rep(i, n)for (int i = 0; i < (int)(n); i++)

int main(void){
	int n, c, k;
	cin >> n >> c >> k;
	vector<int>t(n);
	rep(i, n)cin >> t[i];
	
	sort(t.begin(), t.end());

	int ans = 1;
	for(int i = 0; i < n;){
		int cnt = 0;
		int start = t[i] + k;
		while(i < n){
			if(start < t[i]){
				ans++;
				break;
			}
			if(c <= cnt){
				ans++;
				break;
			}
			cnt++;
			i++;
		}
	}
	cout << ans << endl;
	return 0;
}