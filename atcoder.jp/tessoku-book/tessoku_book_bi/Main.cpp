#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;
#define rep(i, n) for(int i = 0; i < (n); ++i)
#define rep2(i, a, b) for(int i = (a); i < (b); ++i)
const ll MOD = 1000000007;


int main(void) {
    // input
    int N, M;
    cin >> N >> M;

    vector<vector<int> > G(N + 1);
    rep(i, M) {
        int a, b;
        cin >> a >> b;
        G[a].push_back(b);
        G[b].push_back(a);
    }

    // output
    rep2(i, 1, N + 1) {
        cout << i << ": {";
        rep(j, G[i].size()) {
            if(1 <= j) cout << ", ";
            cout << G[i][j];
        }
        cout << "}" << endl;
    }

    return 0;
}