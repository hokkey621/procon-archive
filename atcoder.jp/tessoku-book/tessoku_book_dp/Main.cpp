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

    // solve
    vector<int> error(N + 1, 0);
    rep(i, M) {
        int a;
        cin >> a;
        ++error[a];
    }

    // output
    rep2(i, 1, N + 1) {
        cout << M - error[i] << endl;
    }
    return 0;
}