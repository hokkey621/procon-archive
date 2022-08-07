#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;
#define rep(i, n) for(int i = 0; i < (n); ++i)
const ll MOD = 1000000007;
const ll MOD2 = 100000;


ll calc_z(ll x) {
    ll y = 0;
    ll tmp = x;
    while(tmp > 0) {
        y += (tmp % 10);
        tmp /= 10;
    }
    return (x + y) % MOD2;
}


int main(void) {
    //入力
    ll N, K;
    cin >> N >> K;

    //ループ処理
    vector<int> nxt(MOD2);
    rep(i, MOD2) nxt[i] = calc_z(i);

    vector<int> data(MOD2, -1);
    int pos = N;
    int cnt = 0;
    while(data[pos] == -1) {
        data[pos] = cnt;
        pos = nxt[pos];
        ++cnt;
    }

    int cycle = cnt - data[pos];
    if(data[pos] <= K) {
        K = (K - data[pos]) % cycle + data[pos];
    }
    //結果出力
    rep(i, MOD2) {
        if(data[i] == K) {
            cout << i << endl;
            return 0;
        }
    }
    return 0;
}