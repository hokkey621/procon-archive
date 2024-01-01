#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;
#define rep(i, n) for(int i = 0; i < (n); ++i)
#define rep2(i, a, b) for(int i = (a); i < (b); ++i)
const ll MOD = 1000000007;


int main(void) {
    // input
    int N, L;
    cin >> N >> L;

    // solve
    int ans = -1;
    rep(i, N) {
        int a;
        char b;
        cin >> a >> b;
        if(b == 'W') ans = max(ans, a);
        else ans = max(ans, L - a);
    }

    // output
    cout << ans << endl;
    return 0;
}