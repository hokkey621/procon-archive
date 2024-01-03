#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;
#define rep(i, n) for(int i = 0; i < (n); ++i)
#define rep2(i, a, b) for(int i = (a); i < (b); ++i)
const ll MOD = 1000000007;


int main(void) {
    // input
    int N, D;
    cin >> N >> D;
    vector<vector<ll>> jobs(D + 1);
    rep(i, N) {
        ll x, y;
        cin >> x >> y;
        jobs[x].push_back(y);
    }

    // solve
    ll ans = 0;
    priority_queue<ll> pq;
    rep2(x, 1, D + 1) {
        for(ll y : jobs[x]) pq.push(y);
        
        if(!pq.empty()) {
            ans += pq.top();
            pq.pop();
        }
    }

    // output
    cout << ans << endl;
    return 0;
}