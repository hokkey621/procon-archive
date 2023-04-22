#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;
#define rep(i, n) for(int i = 0; i < (n); ++i)
const ll MOD = 1000000007;


int main(void) {
    //入力
    int N;
    cin >> N;
    string S;
    cin >> S;

    //処理
    int ans = -1;
    int cnt_b = 0;
    rep(i, N) {
        if(S[i] == '-') {
            ++cnt_b;
            continue;
        }
        int cnt = 0;
        while(S[i] != '-') {
            ++cnt;
            ++i;
            if(i == N) {
                break;
            }
        }
        --i;
        ans = max(cnt, ans);
    }
    if(cnt_b == 0) ans = -1;

    //出力
    cout << ans << endl;
}