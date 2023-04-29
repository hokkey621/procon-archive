#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;
#define rep(i, n) for(int i = 0; i < (n); ++i)
const ll MOD = 1000000007;


int main(void) {
    int N, A, B;
    cin >> N >> A >> B;
    int x = A + B;
    rep(i, N) {
        int C;
        cin >> C;
        if(C == x) {
            cout << i + 1 << endl;
            return 0;
        }
    }
}