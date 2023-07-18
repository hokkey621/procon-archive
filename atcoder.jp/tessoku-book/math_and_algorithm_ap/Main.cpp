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

    vector<ll> fibo(N + 1);
    fibo[1] = fibo[2] = 1;
    //出力
    for(int i = 3; i <= N; ++i) fibo[i] = (fibo[i - 1] + fibo[i - 2]) % MOD;
    cout << fibo[N] << endl;
    return 0;
}