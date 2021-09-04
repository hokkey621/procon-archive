#include <iostream>
#include <set>
#include <algorithm>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)


int main(void) {
    int L, q;
    cin >> L >> q;

    set<int> st{0, L};

    rep(i, q) {
        int c, x;
        cin >> c >> x;
        if(c == 1) {
            st.insert(x);
        } else {
            auto l = st.upper_bound(x);
            int a = *l;
            --l;
            int b = *l;
            cout << a - b << endl;
        }
    }
    return 0;
}