#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for(int i = 0; i < (n); ++i)


int main(void){
    //入力
    int H, W;
    cin >> H >> W;
    
    vector<vector<ll> > A(H, vector<ll>(W));
    vector<vector<ll> > B(H, vector<ll>(W));
    
    rep(h, H) rep(w, W) cin >> A[h][w];
    rep(h, H) rep(w, W) cin >> B[h][w];
    
    //計算処理
    ll ans = 0;
    rep(h, H - 1) {
        rep(w, W - 1) {
            ll diff = B[h][w] - A[h][w];
            ans += abs(diff);
            int dx[4] = {0, 1, 0, 1};
            int dy[4] = {0, 0, 1, 1};
            rep(i, 4) {
                A[h + dy[i]][w + dx[i]] += diff;
            }
        }
    }
    
    //結果出力
    if(A == B) {
      cout << "Yes" << endl;
      cout << ans << endl;
    } else {
      cout << "No" << endl;
    }
  	return 0;
}
