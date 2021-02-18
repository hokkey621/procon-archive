#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)


int main(void){
	int n;
	cin >> n;
	vector<int>a(n + 1);
	rep(i, n)cin >> a[i + 1];

	int cnt = 1;
	int num = a[1];

	while(cnt < n){
		if(num == 2){
			cout << cnt << endl;
			return 0;
		}
		num = a[num];
		cnt++;
	}
	cout << -1 << endl;
	return 0;
}