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
    int K;
    cin >> K;

    //処理
    queue <ll> que;
    for(ll i = 1; i <= 9; ++i) que.push(i);
    ll res;
    rep(i, K) {
        res = que.front();
        que.pop();
        if(res % 10LL != 0LL) que.push(10LL * res + (res % 10LL) - 1);
        que.push(10LL * res + (res % 10LL));
        if(res % 10LL != 9LL) que.push(10LL * res + (res % 10LL) + 1);
    }

    //結果出力
    cout << res << endl;
    return 0;
}