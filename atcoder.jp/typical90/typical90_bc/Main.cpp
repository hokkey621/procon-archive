#include <iostream>
#include <vector>
using namespace std;
using ll = long long;
#define rep(i, n) for(int i = 0; i < (n); ++i)


int main(void) {
    ll n, p, q;
    cin >> n >> p >> q;
    vector<ll> a(n);
    rep(i, n) cin >> a[i];
    int ans = 0;
    for(int i = 0; i < n; ++i) {
        for(int j = i+1; j < n; ++j) {
            for(int k = j+1; k < n; ++k) {
                for(int l = k+1; l < n; ++l) {
                    for(int m = l+1; m < n; ++m) {
                        if(a[i] % p * a[j] % p * a[k] % p * a[l] % p * a[m] % p == q) ++ans;
                    }
                }
            }
        }
    }
    cout << ans << endl;
    return 0;
}
