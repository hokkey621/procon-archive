#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;
#define rep(i, n) for(int i = 0; i < (n); ++i)
#define rep2(i, a, b) for(int i = (a); i < (b); ++i)
const ll MOD = 1000000007;


int main(void) {
    // input
    int X, Y;
    cin >> X >> Y;

    // solve
    vector<P> ans;
    int x = X, y = Y;
    while(2 <= x || 2 <= y) {
        ans.push_back(make_pair(x, y));
        if(x < y) {
            y -= x;
        } else {
            x -= y;
        }
    }
    reverse(ans.begin(), ans.end());

    // output
    int K = ans.size();
    cout << K << endl;
    rep(i, K) cout << ans[i].first << " " << ans[i].second << endl;
    return 0;
}