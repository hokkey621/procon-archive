#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;
#define rep(i, n) for(int i = 0; i < (n); ++i)
#define rep2(i, a, b) for(int i = (a); i < (b); ++i)
const ll MOD = 1000000007;


int main(void) {
    // input
    int N;
    cin >> N;
    vector<P> time;
    rep(i, N) {
        int l, r;
        cin >> l >> r;
        time.push_back(make_pair(r, l));
    }

    // solve
    sort(time.begin(), time.end());

    int ans = 0;
    int curenttime = 0;
    rep(i, N) {
        if(curenttime <= time[i].second) {
            ++ans;
            curenttime = time[i].first;
        }
    }

    // output
    cout << ans << endl;
    return 0;
}