#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for(int i = 0; i < (n); ++i)


int main(void) {
    //入力
    ll N;
    cin >> N;

    //計算処理
    ll count_ex = 0;
    
    for(ll a = 2; a * a <= N; ++a) {
        if(N % a != 0) continue;

        ll ex = 0;
        while(N % a == 0) {
            ++ex;
            N /= a;
        }

        count_ex += ex;
    }
    if(N != 1) ++count_ex;

    //結果出力
    rep(i, 21) {
        if(count_ex <= (1<<i)) {
            cout << i << endl;
            break;
        }
    }
    return 0;
}