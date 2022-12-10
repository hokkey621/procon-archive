#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;
#define rep(i, n) for(int i = 0; i < (n); ++i)
const ll MOD = 1000000007;
using ull = unsigned long long;

int main(void) {
    int N;
    ull T;
    cin >> N >> T;
    vector<ull> A(N);
    ull sum = 0;
    rep(i, N) {
        cin >> A[i];
        sum += A[i];
    }

    ull res = T % sum;
    ull tmp = 0;
    rep(i, N) {
        if(res <= tmp + A[i]) {
            cout << i + 1 << ' ' << res - tmp << endl;
            break;
        }
        tmp += A[i];
    }

    return 0;
}