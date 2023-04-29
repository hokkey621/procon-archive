#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;
#define rep(i, n) for(int i = 0; i < (n); ++i)
const ll MOD = 1000000007;


int main(void) {
    //入力
    int N, Q;
    cin >> N >> Q;
    vector<int> s(N+1);
    s[0] = 0;
    rep(i, N) {
        int A;
        cin >> A;
        s[i+1] = s[i] + A;
    }
    //出力
    rep(i, Q) {
        int L, R;
        cin >> L >> R;
        cout << s[R] - s[L-1] << endl;
    }
    return 0;
}