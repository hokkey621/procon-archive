#include <iostream>
#include <vector>
using namespace std;
typedef unsigned long long ull;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)


int  main(void){
	int n;
	cin >> n;
	vector<ull>a(n);
	rep(i, n)cin >> a[i];

	rep(i, n){
		if(a[i] == 0){
			cout << 0 << endl;
			return 0;
		}
	}

	ull res = 1;
	rep(i, n){
		if(a[i] <= 1000000000000000000 / res){
			res *= a[i];
		}else{
			cout << -1 << endl;
			return 0;
		}
	}
	cout << res << endl;
	return 0;
}