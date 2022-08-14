#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
using ll = long long;
using P = pair<int, int>;
#define rep(i, n) for(int i = 0; i < (n); ++i)
const ll MOD = 1000000007;


int main(void) {
    int N, Q;
    cin >> N >> Q;
    auto d = dsu(N);

    rep(i, Q) {
        int t, u, v;
        cin >> t >> u >> v;

        if(t == 0) {
            d.merge(u, v);
        } else {
            if(d.same(u, v)) {
                cout << 1 << endl;
            } else {
                cout << 0 << endl;
            }
        }
    }
    return 0;
}