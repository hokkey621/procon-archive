#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;
#define rep(i, n) for(int i = 0; i < (n); ++i)
const ll MOD = 1000000007;


int main(void) {
  //入力
  int H, W;
  cin >> H >> W;
  vector<vector<char>> C(H+1, vector<char>(W+1));
  for(int i = 1; i <= H; ++i) for(int j = 1; j <= W; ++j) cin >> C[i][j];
  
  
  //dp
  vector<vector<ll> > dp(H+1, vector<ll>(W+1, 0LL));
  dp[1][1] = 1LL;
  for(int i = 1; i <= H; ++i) {
    for(int j = 1; j <= W; ++j) {
      if(i == 1 && j == 1) continue;
      
      if(2 <= i && C[i - 1][j] == '.') dp[i][j] += dp[i - 1][j];
      if(2 <= j && C[i][j - 1] == '.') dp[i][j] += dp[i][j - 1];
    }
  }
  
  //出力
  cout << dp[H][W] << endl;
  return 0;
}