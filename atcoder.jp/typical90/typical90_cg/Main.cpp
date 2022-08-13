#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;
#define rep(i, n) for(int i = 0; i < (n); ++i)
const ll MOD = 1000000007;


int main(void) {
    //入力
    ll K;
    cin >> K;

    //処理
    vector<ll> pf;
    for(ll i = 1; i * i <= K; ++i) {
        if(K % i == 0) {
            pf.push_back(i);
            if(K / i != i) {
                pf.push_back(K / i);
            }
        }
    }
    sort(pf.begin(), pf.end());

    ll ans = 0;
    for(int i = 0; i < pf.size(); ++i) {
        for(int j = i; j < pf.size(); ++j) {
            if(K / pf[i] < pf[j]) continue;
            if(K % (pf[i] * pf[j]) != 0) continue;
            if(K / (pf[i] * pf[j]) < pf[j]) continue;

            ++ans;
        }
    }

    //結果出力
    cout << ans << endl;
    return 0;
}