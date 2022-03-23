#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
using ll = long long;
#define rep(i, n) for(int i = 0; i < (n); ++i)


int main(void) {
    //入力
    int N;
    cin >> N;
    vector<int> A(N), B(N);
    rep(i, N) cin >> A[i];
    rep(i, N) cin >> B[i];

    sort(A.begin(), A.end());
    sort(B.begin(), B.end());

    ll ans = 0;
    rep(i, N) {
        ans += abs(A[i] - B[i]);
    }
    cout << ans << endl;
    return 0;
}