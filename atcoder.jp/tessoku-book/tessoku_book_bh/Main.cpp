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
    cin >> N;
    vector<int> A(N + 1);
    rep2(i, 1, N + 1) {
        cin >> A[i];
    }

    stack<P> st;
    rep2(i, 1, N + 1) {
        if(2 <= i) {
            st.push(make_pair(i - 1, A[i - 1]));
            while(!st.empty() && st.top().second <= A[i]) {
                st.pop();
            }
        }
        if(st.empty()) {
                cout << -1 << endl;
        } else {
                cout << st.top().first << endl;
        }
    }

    return 0;
}