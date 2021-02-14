#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
typedef long long ll; 

int main(void){
	int t;
	cin >> t;

	rep(i, t){
		ll l, r;
		cin >> l >> r;
		ll rx = r - 2 * l;
		if(rx < 0)cout << 0 << endl;
		else cout << ((rx + 1) * (rx + 2)) / 2 << endl;
	}

	return 0;
}