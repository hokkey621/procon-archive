#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)


int main(void) {
    int n;
    cin >> n;
    vector<pair<double, double> > data(n);
    rep(i, n) {
        int t;
        double l, r;
        cin >> t >> l >> r;
        if(t == 2) r -= 0.1;
        else if(t == 3) l += 0.1;
        else if(t == 4) {
            r -= 0.1;
            l += 0.1;
        }
        data[i] = make_pair(l, r);
    }

    //rep(i, n) cout << data[i].first << ' ' << data[i].second << endl;

    int ans = 0;
    rep(i, n) {
        for(int j = i + 1; j < n; ++j) {
            if(data[i].first <= data[j].second && data[j].first <= data[i].second) ++ans;
        }
    }
    cout << ans << endl;
    return 0;
}