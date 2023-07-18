#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;
#define rep(i, n) for(int i = 0; i < (n); ++i)
const ll MOD = 1000000007;


int main(void) {
    int N;
    cin >> N;

    ll ans = 0;
    rep(i, N) {
        char t;
        int a;
        cin >> t >> a;

        if(t == '+') {
            ans += a;
        } else if(t == '-') {
            if(ans < a) ans = ans - a + 10000;
            else ans = ans - a;
        } else if(t == '*') {
            ans *= a;
        }
        ans %= 10000;
        cout << ans << '\n';
    }
    return 0;
}