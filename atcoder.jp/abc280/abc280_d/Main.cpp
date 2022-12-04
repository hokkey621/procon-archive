#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;
#define rep(i, n) for(int i = 0; i < (n); ++i)
const ll MOD = 1000000007;


ll f(ll n , ll p) {
    if(n == 0) return 0;
    n /= p;
    return n + f(n, p);
}

// 素因数分解
vector<pair<long long, long long> > prime_factorize(long long N) {
    // 答えを表す可変長配列
    vector<pair<long long, long long> > res;

    // √N まで試し割っていく
    for (long long p = 2; p * p <= N; ++p) {
        // N が p で割り切れないならばスキップ
        if (N % p != 0) {
            continue;
        }

        // N の素因数 p に対する指数を求める
        int e = 0;
        while (N % p == 0) {
            // 指数を 1 増やす
            ++e;

            // N を p で割る
            N /= p;
        }

        // 答えに追加
        res.emplace_back(p, e);
    }

    // 素数が最後に残ることがありうる
    if (N != 1) {
        res.emplace_back(N, 1);
    }
    return res;
}

int main() {
    ll K;
    cin >> K;
    const auto& pf = prime_factorize(K);

    ll ac = K, wa = 0;
    while(ac - wa > 1) {
        ll wj = (ac + wa) / 2;
        bool ok = true;
        for(auto [p, e] : pf) {
            if(f(wj, p) < e) ok = false;
        }
        if(ok) ac = wj;
        else wa = wj;
    }
    
    cout << ac << endl;
    return 0;
}