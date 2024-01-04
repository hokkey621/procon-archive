#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;
#define rep(i, n) for(int i = 0; i < (n); ++i)
#define rep2(i, a, b) for(int i = (a); i < (b); ++i)
const ll MOD = 1000000007;


int main(void) {
    // input
    int Q;
    cin >> Q;

    // solve
    set<int> st;
    rep(i, Q) {
        int type, x;
        cin >> type >> x;
        if(type == 1) {
            st.insert(x);
        } else if(type == 2) {
            st.erase(x);
        } else {
            auto itr = st.lower_bound(x);
            if(itr == st.end()) {
                cout << -1 << endl;
            } else {
                cout << *itr << endl;
            }
        }
    }

    return 0;
}