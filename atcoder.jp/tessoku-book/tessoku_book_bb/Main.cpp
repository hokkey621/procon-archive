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
    map<string, int> mp;
    rep(i, Q) {
        int type;
        cin >> type;
        if(type == 1) {
            string x;
            int y;
            cin >> x >> y;
            mp[x] = y;
        } else {
            string x;
            cin >> x;
            cout << mp[x] << '\n';
        }
    }
    return 0;
}     
