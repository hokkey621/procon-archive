#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
const int INF = 1<<29;


template<class T> void chmax(T& a, T b) {
    if(a < b) {
        a = b;
    }
}


int main(void) {
    string s, t;
    cin >> s >> t;
    int size_s = s.size();
    int size_t = t.size();

    vector<vector<int> > dp(size_s+1, vector<int>(size_t+1, 0));

    rep(i, size_s+1) {
        rep(j, size_t+1) {
            //変更
            if(0 < i && 0 < j) {
                if(s[i-1] == t[j-1]) chmax(dp[i][j], dp[i-1][j-1] + 1);
                else chmax(dp[i][j], dp[i-1][j-1]);
            }
            //削除
            if(0 < i) chmax(dp[i][j], dp[i-1][j]);
            //挿入
            if(0 < j) chmax(dp[i][j], dp[i][j-1]);
        }
    }

    //復元
    int len = dp[size_s][size_t];
    string ans = "";
    int x = size_s;
    int y = size_t;
    while(0 < len) {
        if(s[x-1] == t[y-1]) {
            ans = s[x-1] + ans;
            --x;
            --y;
            --len;
        } else if(dp[x][y] == dp[x-1][y]) {
            --x;
        } else {
            --y;
        }
        //cout << len << x << y << ans << endl;
    }

    cout << ans << endl;
    return 0;
}