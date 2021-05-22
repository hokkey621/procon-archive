#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
using ll = long long;
#define rep(i, n) for(int i = 0; i < (n); ++i)


int main(void) {
    int n;
    cin >> n;
    vector<ll> a(n);
    vector<ll> b(n);
    vector<ll> c(n);
    rep(i, n) cin >> a[i];
    rep(i, n) cin >> b[i];
    rep(i, n) cin >> c[i];

    vector<ll> cnt(n+1);
    rep(i, n) {
        cnt[b[c[i]-1]]++;
    }
    
    //rep(i, n+1) cout << cnt[i] << ' ';
    ll ans = 0;
    rep(i, n) {
        ans += cnt[a[i]];
    }
    cout << ans << endl;
    return 0;
}