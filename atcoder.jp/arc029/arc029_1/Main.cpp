#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)


int main(void){
	int n;
	cin >> n;
	vector<int>t(n);
	rep(i, n)cin >> t[i];
	
	int num = 1 << n;
	int ans = 1000;
	rep(i, num){
		int machine1 = 0;
		int machine2 = 0;
		rep(j, n){
			if((i >> j) & 1){
				machine1 += t[j];
			}else{
				machine2 += t[j];
			}
		}
		int tmp = max(machine1, machine2);
		ans = min(tmp, ans);
	}
	cout << ans << endl;
	return 0;
}