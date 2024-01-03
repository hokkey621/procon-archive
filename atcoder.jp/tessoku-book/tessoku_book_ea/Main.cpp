#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;
#define rep(i, n) for(int i = 0; i < (n); ++i)
#define rep2(i, a, b) for(int i = (a); i < (b); ++i)
const ll MOD = 1000000007;


int main(void) {
    // input
    int N;
    cin >> N;
    map<int, ll> mp;
    rep(i, N) {
        int a;
        cin >> a;
        ++mp[a];
    }

    // solve
    ll ans = 0;
    for(auto& [k, v]: mp) {
        // caluculate vC2
        ans += v * (v - 1) / 2;
    }

    // output
    cout << ans << endl;
    return 0;
}