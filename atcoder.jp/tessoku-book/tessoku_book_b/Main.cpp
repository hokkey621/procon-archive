#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;
#define rep(i, n) for(int i = 0; i < (n); ++i)
const ll MOD = 1000000007;


int main(void) {
    int N, X;
    cin >> N >> X;
    vector<int> A(N);
    rep(i, N) {
        int a;
        cin >> a;
        if(a == X) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}