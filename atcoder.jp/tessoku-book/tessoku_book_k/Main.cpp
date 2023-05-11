#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;
#define rep(i, n) for(int i = 0; i < (n); ++i)
const ll MOD = 1000000007;

int N;

int my_binary_search(const vector<int> A, int X) {
    int l = 0;
    int r = N - 1;
    while(l <= r) {
        int m = (l + r) / 2;
        if(X < A[m]) r = m - 1;
        else if (X > A[m]) l = m + 1;
        else return m;
    }
    return -1;
}


int main(void) {
    //入力
    int X;
    cin >> N >> X;
    vector<int> A(N);
    rep(i, N) cin >> A[i];

    int ans = my_binary_search(A, X);
    cout << ans + 1 << endl;
    return 0;
}