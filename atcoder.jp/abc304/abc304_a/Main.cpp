#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;
#define rep(i, n) for(int i = 0; i < (n); ++i)
const ll MOD = 1000000007;


int main(void) {
    int N;
    cin >> N;
    vector<string> S(N);
    vector<int> A(N);
    rep(i, N) cin >> S[i] >> A[i];

    int idx = min_element(A.begin(), A.end()) - A.begin();
    rep(i, N) {
        cout << S[(idx + i) % N] << endl;
    }
    return 0;
}