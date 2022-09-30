#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
using ll = long long;
using P = pair<int, int>;
#define rep(i, n) for(int i = 0; i < (n); ++i)
const ll MOD = 1000000007;


int main(void) {
    //入力
    string s;
    cin >> s;
    int N = s.size();

    //処理
    vector<int> ans(N);
    rep(ri, 2) {
        //Rの処理
        int cnt = 0;
        rep(i, N) {
            if(s[i] == 'R') {
                ++cnt;
            } else {
                ans[i] += cnt / 2;
                ans[i - 1] += (cnt + 1) / 2;
                cnt = 0;
            }
        }

        //反転
        reverse(ans.begin(), ans.end());
        reverse(s.begin(), s.end());
        //replace(s.begin(), s.end(), 'R', 'l');
        //replace(s.begin(), s.end(), 'L', 'r');
        //transform(s.begin(), s.end(), s.begin(), toupper);
      	rep(i, N) {
        	if(s[i] == 'R') s[i] = 'L';
          	else s[i] = 'R';
        }
    }

    //結果出力
    rep(i, N) {
        cout << ans[i] << endl;
    }
    return 0;
}