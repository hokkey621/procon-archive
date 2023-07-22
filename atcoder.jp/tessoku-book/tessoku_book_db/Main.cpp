#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;
#define rep(i, n) for(int i = 0; i < (n); ++i)
const ll MOD = 1000000007;

ll mypower(ll a, ll b) {
    ll p = a;
    ll ans = 1;
    for(ll i = 0; i < 60; ++i) {
        ll div = (1LL << i);
        if((b / div) % 2 == 1) {
            ans = (ans * p) % MOD;
        }
        p = (p * p) % MOD;
    }
    return ans;
}


int main(void) {
    ll a, b;
    cin >> a >> b;
    cout << mypower(a, b) << endl;
    return 0;
}