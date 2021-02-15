#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
typedef long long ll;


int main(void){
	int n;
	cin >> n;
	vector<int>a(n);
	rep(i, n)cin >> a[i];

	sort(a.begin(), a.end());

	int pos = 0;
	int ans = 0;

	while(pos < n){
		int num = a[pos];
		int cnt = 0;
		while(pos < n && num == a[pos]){
			pos++;
			cnt++;
		}
		if(cnt % 2 != 0)ans++;
	}
	cout << ans << endl;
	return 0;
}