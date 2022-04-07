#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for(int i = 0; i < (n); ++i)


ll power(ll x, ll n) {
    if(n == 0) return 1;
    else if(n == 1) return x;
    else if(n % 2 != 0) return x * power(x, n - 1);
    else {
        ll tmp = power(x, n / 2);
        return tmp * tmp;
    }
}


int main(void) {
    //入力
    ll a, b, c;
    cin >> a >> b >> c;

    //結果出力
    if(a < power(c, b)) cout << "Yes" << endl;
    else cout << "No" << endl;
    
    return 0;
}