#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;
#define rep(i, n) for(int i = 0; i < (n); ++i)
#define rep2(i, a, b) for(int i = (a); i < (b); ++i)
const ll MOD = 1000000007;


int main(void) {
    // input
    string S;
    cin >> S;

    // solve
    int N = S.size();
    stack<int> st;
    rep(i, N) {
        if(S[i] == '(') {
            st.push(i);
        } else {
            int j = st.top();
            st.pop();
            cout << j + 1 << " " << i + 1 << endl;
        }
    }

    return 0;
}