#include <iostream>
#include <string>
using namespace std;
using ll = long long;
#define rep(i, n) for(int i = 0; i < (n); ++i)

ll comb[61][61];

int main(void) {
    int a, b;
    ll k;
    cin >> a >> b >> k;

    comb[0][0] = 1;
    rep(i, 60) {
        rep(j, i+1) {
            comb[i+1][j] += comb[i][j];
            comb[i+1][j+1] += comb[i][j];
        }
    }

    string ans = "";
    while(a+b > 0) {
        ll x = 0;
        if(a >= 1) x = comb[a+b-1][a-1];
        if(k <= x) {
            ans += 'a';
            --a;
        } else {
            ans += 'b';
            --b;
            k -= x;
        }
    }
    cout << ans << endl;
    return 0;
}