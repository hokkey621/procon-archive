#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;
#define rep(i, n) for(int i = 0; i < (n); ++i)
const ll MOD = 1000000007;

int N;


int main(void) {
    //入力
    cin >> N;
    vector<int> A(N);
    rep(i, N) cin >> A[i];

    //処理
    sort(A.begin(), A.end());

    //出力
    int Q;
    cin >> Q;
    rep(i, Q) {
        int x;
        cin >> x;
        int pos = lower_bound(A.begin(), A.end(), x) - A.begin();
        cout << pos << endl;
    }
}