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
    int N, M;
    cin >> N >> M;
    dsu uf(N);
    rep(i, M) {
        int a, b;
        cin >> a >> b;
        --a; --b;
        uf.merge(a,b);
    }

    int K;
    cin >> K;
    set<P> st;
    rep(i, K) {
        int a, b;
        cin >> a >> b;
        --a; --b;
        a = uf.leader(a);
        b = uf.leader(b);
        if(a > b) swap(a, b);

        st.emplace(a, b);
    }

    int Q;
    cin >> Q;
    rep(i, Q) {
        int a, b;
        cin >> a >> b;
        --a; --b;
        a = uf.leader(a);
        b = uf.leader(b);
        if(a > b) swap(a, b);
        if(st.count(P(a, b))) cout << "No" << '\n';
        else cout << "Yes" << '\n';
    }

    return 0;
}