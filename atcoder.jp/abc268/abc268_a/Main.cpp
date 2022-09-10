#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
using ll = long long;
using P = pair<int, int>;
#define rep(i, n) for(int i = 0; i < (n); ++i)
const ll MOD = 1000000007;


int main(void) {
    set <int> st;
    rep(i, 5) {
        int x;
        cin >> x;
        st.insert(x);
    }
    cout << st.size() << endl;
}