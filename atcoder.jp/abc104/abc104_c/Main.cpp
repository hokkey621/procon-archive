#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)


int main(void){
	int d, g;
	cin >> d >> g;
	vector<int>p(d);
	vector<int>c(d);
	rep(i, d)cin >> p[i] >> c[i];

	int ans = 10000;
	int n = 1 << d;
	for(int i = 1; i < n; i++){
		int tmp = 0;
		int cnt = 0;
		for(int j = d - 1; 0 <= j; j--){
			if(((i >> j) & 1) == 1){
				int num = 0;
				while(num < p[j] && tmp < g){
					tmp += 100 * (j + 1);
					num++;
					cnt++;
				}
				if(num == p[j])tmp += c[j];
			}
		}
		if(tmp < g){
			for(int k = d - 1; 0 <= k; k--){
				if(((i >> k) & 1) == 0){
					int num = 0;
					while(num < p[k] && tmp < g){
						tmp += 100 * (k + 1);
						num++;
						cnt++;
					}
					if(num == p[k])tmp += c[k];
				}
			}
		}
		ans = min(ans, cnt);
	}

	cout << ans << endl;
	return 0;
}