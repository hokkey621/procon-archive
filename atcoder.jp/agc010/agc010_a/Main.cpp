#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)


int main(void){
	int n;
	cin >> n;
	int cnt = 0;
	rep(i, n){
		int a;
		cin >> a;
		if(a % 2 == 1)cnt++;
	}
	if(cnt % 2 == 0)cout << "YES" << endl;
	else cout << "NO" << endl;
	return 0;
}