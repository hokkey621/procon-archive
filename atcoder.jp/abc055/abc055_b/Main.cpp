#include <iostream>
using namespace std;
typedef long long ll;
const ll MOD = 1e9 + 7;


int main(void){
	int n;
	cin >> n;
	
	ll ans = 1;
	for(int i = 1; i <= n; i++){
		ans *= i;
		ans %= MOD;
	}

	cout << ans << endl;
	return 0;
}