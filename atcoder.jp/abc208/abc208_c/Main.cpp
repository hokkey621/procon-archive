#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
using ll = long long;
using P = pair<ll, ll>;
#define rep(i, n) for(int i = 0; i < (n); ++i)


int main(void) {
    ll n, k;
    cin >> n >> k;
    vector<P> member(n);
    rep(i, n) {
        ll a;
        cin >> a;
        member[i] = make_pair(a, i);
    }
    sort(member.begin(), member.end());

    ll all = k / n;
    k -= (all * n);
    vector<ll> ans(n);
    rep(i, k) {
        ans[member[i].second] += 1;
    }

    rep(i, n) {
        cout << all + ans[i] << endl;
    }
    return 0;
}