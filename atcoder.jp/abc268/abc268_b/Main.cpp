#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
using ll = long long;
using P = pair<int, int>;
#define rep(i, n) for(int i = 0; i < (n); ++i)
const ll MOD = 1000000007;


int main(void) {
    //入力
    string s, t;
    cin >> s >> t;

    bool can = true;
    if (s.size() > t.size()) can = false;
    rep(i, s.size()) {
        if(s[i] != t[i]) can = false;
    }

    if(can) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}