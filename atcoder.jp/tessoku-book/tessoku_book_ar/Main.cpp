#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;
#define rep(i, n) for(int i = 0; i < (n); ++i)
#define rep2(i, a, b) for(int i = (a); i < (b); ++i)
const ll MOD = 1000000007;


int main(void) {
    // input
    int N, Q;
    cin >> N >> Q;
    vector<int> v(N + 1);
    rep(i, N + 1) v[i] = i;

    // solve
    bool reversed = false; // true: reversed, false: not reversed
    rep(i, Q) {
        int type;
        cin >> type;
        if(type == 1) {
            int x, y;
            cin >> x >> y;
            if(reversed) v[N + 1 - x] = y;
            else v[x] = y;
        } else if(type == 2) {
            reversed = !reversed;
        } else if(type == 3) {
            int x;
            cin >> x;
            if(reversed) cout << v[N + 1 - x] << '\n';
            else cout << v[x] << '\n';
        }
    }

    return 0;
}