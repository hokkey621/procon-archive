#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for(int i = 0; i < (n); ++i)


int main(void) {
    //入力
    ll N, L, K;
    cin >> N >> L >> K;
    vector<ll> A(N);
    rep(i, N) cin >> A[i];

    //計算処理
    ll l = 1;
    ll r = L;
    while(l < r - 1) {
        ll m = l + (r - l) / 2;
        ll tmp = 0;
        ll cnt = 0;
        ll pre = 0;

        rep(i, N) {
            if(m <= A[i] - pre && m <= L - A[i]) {
                ++cnt;
                pre = A[i];
            }
        }

        if(K <= cnt) l = m;
        else r = m;
    }

    //結果出力
    cout << l << endl;
    return 0;
    
}