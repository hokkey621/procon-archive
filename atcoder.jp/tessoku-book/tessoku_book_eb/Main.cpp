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
        } else {
            auto itr_bigger = st.lower_bound(x);
            auto itr_smaller = (itr_bigger == st.begin()) ? st.end() : prev(itr_bigger);

            if(itr_bigger != st.end() && itr_smaller != st.end()) {
                // xより大きい値とxより小さい値が両方存在する場合
                cout << min(abs(x - *itr_bigger), abs(x - *itr_smaller)) << endl;
            } else if(itr_bigger != st.end()) {
                // xより大きい値のみ存在する場合
                cout << abs(x - *itr_bigger) << endl;
            } else if(itr_smaller != st.end()) {
                // xより小さい値のみ存在する場合
                cout << abs(x - *itr_smaller) << endl;
            } else {
                // xより大きい値もxより小さい値も存在しない場合
                cout << -1 << endl;
            }
        }
    }
    return 0;
}