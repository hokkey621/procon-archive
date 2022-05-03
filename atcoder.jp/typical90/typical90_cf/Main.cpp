#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for(int i = 0; i < (n); ++i)


int main(void){
    //入力
    int N;
    string S;
    cin >> N >> S;
    
    //計算処理
    vector<int> circle(N + 1), cross(N + 1);
    circle[0] = cross[0] = 0;
    for(int i = 1; i <= N; ++i) {
        if(S[i - 1] == 'o') {
            circle[i] = i;
            cross[i] = cross[i - 1];
        } else {
            circle[i] = circle[i - 1];
            cross[i] = i;
        }
    }
    
    ll ans = 0;
    rep(i, N + 1) {
        ans += min(circle[i], cross[i]) * 1LL;
    }
    
    //結果出力
    cout << ans << endl;
    return 0;
}
