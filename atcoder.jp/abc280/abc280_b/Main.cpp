#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;
#define rep(i, n) for(int i = 0; i < (n); ++i)
const ll MOD = 1000000007;


int main(void) {
    int N;
    cin >> N;
    vector<int> S(N);
    rep(i, N) cin >> S[i];

    cout << S[0] << endl;
    for(int i = 1; i < N; ++i) cout << S[i] - S[i-1] << endl;
}