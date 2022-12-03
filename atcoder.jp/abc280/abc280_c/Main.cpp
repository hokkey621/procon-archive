#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;
#define rep(i, n) for(int i = 0; i < (n); ++i)
const ll MOD = 1000000007;


int main(void) {
    string S, T;
    cin >> S >> T;
    rep(i, T.size()) {
        if(S[i] != T[i] | i >= S.size()) {
            cout << i + 1 << endl;
            return 0;
        }
    }
}