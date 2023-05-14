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
    vector<int> A(N+1);
    for(int i = 1; i <= N; ++i) cin >> A[i];

    //処理
    vector<int> unique_A(N+1);
    for(int i = 1; i <= N; ++i) unique_A[i] = A[i];
    sort(unique_A.begin(), unique_A.end());
    //重複削除
    unique_A.erase(unique(unique_A.begin(), unique_A.end()), unique_A.end());

    vector<int> B(N+1);
    for(int i = 1; i <= N; ++i) {
        B[i] = lower_bound(unique_A.begin(), unique_A.end(), A[i]) - unique_A.begin();
    }

    for(int i = 1; i <= N; ++i) {
        cout << B[i] << endl;
    }
    return 0;
}