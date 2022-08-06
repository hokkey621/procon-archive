#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;
#define rep(i, n) for(int i = 0; i < (n); ++i)
const ll MOD = 1000000007;


int main(void) {
    vector<int> cnt(14, 0);
    rep(i, 5) {
        int x;
        cin >> x;
        ++cnt[x];
    }

    if(count(cnt.begin(), cnt.end(), 3) == 1 && count(cnt.begin(), cnt.end(), 2) == 1) cout << "Yes" << endl;
    else cout << "No" << endl;
} 