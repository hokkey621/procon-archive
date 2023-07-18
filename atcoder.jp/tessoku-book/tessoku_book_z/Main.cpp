#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;
#define rep(i, n) for(int i = 0; i < (n); ++i)
const ll MOD = 1000000007;


bool is_prime(int x) {
    for(int i = 2; i * i <= x; ++i) {
        if(x % i == 0) return false;
    }
    return true;
}


int main(void) {
    int Q;
    cin >> Q;
    rep(i, Q) {
        int x;
        cin >> x;
        cout << (is_prime(x) ? "Yes" : "No") << endl;
    }
    return 0;
}