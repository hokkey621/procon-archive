#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;
#define rep(i, n) for(int i = 0; i < (n); ++i)
const ll MOD = 1000000007;


int main(void) {
    string S;
    cin >> S;

    ll ans = 0;
    rep(i, S.size()) {
        if(S[i] == '0') {
            if(i + 1 < S.size() && S[i + 1] == '0') {
                ++ans;
                ++i;
            } else {
                ++ans;
            }
        } else {
            ++ans;
        }
    }

    cout << ans << endl;
    return 0;
}