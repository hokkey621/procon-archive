#include <iostream>
#include <cmath>
using namespace std;
using ll = long long;

int count(ll x){
	int cnt = 0;
	while(x > 0){
		x /= 10;
		cnt++;
	}
	return cnt;
}

int main(void){
	ll n;
	cin >> n;

	int ans = 100;
	for(ll a = 1; a <= sqrt(n); a++){
		if(n % a != 0)continue;
		ll b = n / a;

		int tmp = max(count(a), count(b));
		ans = min(ans, tmp);
	}
	cout << ans << endl;
	return 0;
}