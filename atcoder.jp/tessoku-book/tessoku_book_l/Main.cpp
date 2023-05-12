#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;
#define rep(i, n) for(int i = 0; i < (n); ++i)
const ll MOD = 1000000007;

ll N, K;


bool check(ll m, const vector<ll> A) {
    ll sum = 0;
    rep(i, N) sum += m / A[i];

    if(K <= sum) return true;
    else return false;
}

int main(void) {
    //入力
    cin >> N >> K;
    vector<ll> A(N);
    rep(i, N) cin >> A[i];

    ll l = 0;
    ll r = 1e9;
    while(l < r) {
        ll m = (l + r) / 2;
        bool can = check(m, A);
        if(can) r = m;
        else l = m + 1;
    }

    cout << r << endl;
    return 0;
}