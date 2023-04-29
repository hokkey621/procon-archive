#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;
#define rep(i, n) for(int i = 0; i < (n); ++i)
const ll MOD = 1000000007;

//グローバル変数
char C[100][100];
int H, W, N;


bool check(int a, int b, int d) {
    if((a + d < H && b + d < W && C[a + d][b + d] == '#') && (a + d < H && b + d < W && C[a + d][b - d] == '#') && (a - d < H && b + d < W && C[a - d][b + d] == '#') && (a - d < H && b - d < W && C[a - d][b - d] == '#')) {
            if((a + N + 1 > H || b + N + 1 > W || C[a + N + 1][b + N + 1] == '.') || (a + N + 1 > H || b - N - 1 < 0 || C[a + N + 1][b - N - 1] == '.') || (a - N - 1 < 0 || b + N + 1 > W || C[a - N - 1][b + N + 1] == '.') || (a - N - 1 < 0 || b - N - 1 < 0 || C[a - N - 1][b - N - 1] == '.')) {
                return true;
        }
    }
    return false;
}


int main(void) {
    //入力
    cin >> H >> W;
    
    rep(i, H) rep(j, W) cin >> C[i][j];

    N = min(H, W);
    vector<int> ans(N+1, 0);

    for(int a = 0; a < H; ++a) {
        for(int b = 0; b < W; ++b) {
            if(C[a][b] != '#') continue;
            if(check(a, b, 1) == false) continue;
            int d = 1;
            while(check(a, b, d)) {
                ++d;
            }
            --d;
            ans[d] += 1;
        }
    }

    for(int i = 1; i <= N; ++i) cout << ans[i] << endl;
    return 0;
}