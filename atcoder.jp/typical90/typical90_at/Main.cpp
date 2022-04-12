#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for(int i = 0; i < (n); ++i)


int main(void) {
    //入力
    int N;
    cin >> N;
    const int NUM = 46;

    vector<ll> A(NUM, 0) , B(NUM, 0) , C(NUM, 0);
    rep(i, N) {
        int x;
        cin >> x;
        ++A[x % NUM];
    }
    rep(i, N) {
        int x;
        cin >> x;
        ++B[x % NUM];
    }
    rep(i, N) {
        int x;
        cin >> x;
        ++C[x % NUM];
    }

    //計算処理
    ll ans = 0;
    
    rep(i, NUM) {
        rep(j, NUM) {
            rep(k, NUM) {
                if((i + j + k) % NUM != 0) continue;
                ans += A[i] * B[j] * C[k];
            }
        }
    }

    //結果出力
    cout << ans << endl;
    return 0;
}