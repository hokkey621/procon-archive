#include <iostream>
#include <cmath>
using namespace std;
typedef long long ll;
ll x;

ll func(ll num){
	if(num < 0){
		return 0;
	}else{
		return num / x + 1;
	}
}


int main(void){
	ll a, b;
	cin >> a >> b >> x;

	cout << func(b) - func(a - 1) << endl;
	return 0;
}