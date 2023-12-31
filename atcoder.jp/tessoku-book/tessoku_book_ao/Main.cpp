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
    string S;
    cin >> S;

    // solve
    bool flag = false;
    rep(i, N - 2) {
        if(S[i] == 'R' && S[i + 1] == 'R' && S[i + 2] == 'R') {
            flag = true;
            break;
        } else if (S[i] == 'B' && S[i + 1] == 'B' && S[i + 2] == 'B') {
            flag = true;
            break;
        }
    }

    // output
    if(flag) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}