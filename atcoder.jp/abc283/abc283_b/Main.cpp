#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;
#define rep(i, n) for(int i = 0; i < (n); ++i)
const ll MOD = 1000000007;


int main(void) {
    int N;
    cin >> N;
    vector<int> A(N+1);
    rep(i, N) cin >> A[i+1];

    int Q;
    cin >> Q;
    rep(i, Q) {
        int q;
        cin >> q;
        if(q == 1) {
            int k ,x;
            cin >> k >> x;
            A[k] = x;
        } else if(q = 2) {
            int k;
            cin >> k;
            cout << A[k] << endl;
        }
    }
    return 0;
}