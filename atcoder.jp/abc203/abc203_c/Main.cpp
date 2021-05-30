#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
using ll = long long;
#define rep(i, n) for(int i = 0; i < (n); ++i)


int main(void) {
    ll n, k;
    cin >> n >> k;
    vector<pair<ll, ll> > data(n);
    rep(i, n) {
        ll a, b;
        cin >> a >> b;
        data[i] = make_pair(a, b);
    }
    
    sort(data.begin(), data.end());
    
    ll res = 0;
    int i;
    ll memo = 0;
    for(i = 0; i < n; ++i) {
        if(data[i].first <= k) {
            if(memo == data[i].first) {
                k += data[i].second;
            } else {
                k += data[i].second;
                res = data[i].first;
            }
            memo = data[i].first;
        } else {
            res = k;
            break;
        }
        //cout << k << ' ' << res << endl;
    }
    if(i == n) res = k;

    cout << res << endl;
    return 0;
}