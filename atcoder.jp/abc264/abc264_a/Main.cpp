#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;
#define rep(i, n) for(int i = 0; i < (n); ++i)
const ll MOD = 1000000007;


int main(void) {
    string s = "atcoder";
    int L, R;
    cin >> L >> R;
    --L;
    --R;

    for(int i = L; i <= R; ++i) cout << s[i];

    return 0;
}