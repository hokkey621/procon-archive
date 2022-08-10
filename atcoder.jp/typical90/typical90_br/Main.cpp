#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;
#define rep(i, n) for(int i = 0; i < (n); ++i)
const ll MOD = 1000000007;


double calc_median(vector<ll> vec) {
    int size = vec.size();
    if(size % 2 == 0) {
        return (vec[size / 2 - 1] + vec[size / 2]) / 2;
    } else {
        return vec[(size - 1) / 2];
    }
}


int main(void) {
    //入力
    int N;
    cin >> N;
    vector<ll> X(N), Y(N);
    rep(i, N) cin >> X[i] >> Y[i];

    //処理
    sort(X.begin(), X.end());
    sort(Y.begin(), Y.end());
    
    double mx = calc_median(X);
    double my = calc_median(Y);

    double dx = 0, dy = 0;
    rep(i, N) dx += abs(X[i] - mx);
    rep(i, N) dy += abs(Y[i] - my);

    //結果出力
    cout << (ll)(dx + dy) << endl;
    return 0;
}