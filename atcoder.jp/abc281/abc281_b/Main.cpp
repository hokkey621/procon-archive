#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;
#define rep(i, n) for(int i = 0; i < (n); ++i)
const ll MOD = 1000000007;


int main(void) {
    string S;
    cin >> S;
    bool can = true;
    if(S.size() != 8) {
        can = false;
    }
    if(can == true && (S[0] < 'A' || 'Z' < S[0])) {
        can = false;
    }
    rep(i, 6) {
        if(!can) break;
        if(S[1] == '0') can = false;
        if(S[i+1] < '0' || '9' < S[i+1]) {
            can = false;
        }
    }
    if(can == true && (S[S.size()-1] < 'A' || 'Z' < S[S.size()-1])) can = false;

    if(can) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}