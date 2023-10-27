#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;
#define rep(i, n) for(int i = 0; i < (n); ++i)
#define rep2(i, a, b) for(int i = (a); i < (b); ++i)
const ll MOD = 1000000007;


int main(void) {
    // input
    int N;
    string S;
    cin >> N >> S;

    // solve
    vector<int> l(N), r(N);
    l[0] = 1;
    rep(i, N - 1) {
        // consider < 
        if(S[i] == 'A') {
            l[i + 1] = l[i] + 1;
        } else {
            l[i + 1] = 1;
        }
    }

    r[N - 1] = 1;
    for(int i = N - 2; i >= 0; --i) {
        // consider >
        if(S[i] == 'B') {
            r[i] = r[i + 1] + 1;
        } else {
            r[i] = 1;
        }
    }

    vector<int> ans(N);
    rep(i, N) {
        ans[i] = max(l[i], r[i]);
    }

    // output
    cout << accumulate(ans.begin(), ans.end(), 0) << endl;
    return 0;
}