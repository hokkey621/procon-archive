#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for(int i = 0; i < (n); ++i)
const ll MOD = 1000000007;


int main(void) {
    int H, W, R, C;
    cin >> H >> W >> R >> C;

    int ans = 0;
    if(0 < R - 1) ++ans;
    if(R + 1 <= H) ++ans;
    if(0 < C - 1) ++ans;
    if(C + 1 <= W) ++ans;

    cout << ans << endl;
    return 0;
}