#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)


int main(void) {
    int h, w;
    cin >> h >> w;
    vector<vector<int> > a(h, vector<int>(w));
    vector<int> sum_l(h, 0);
    vector<int> sum_r(w, 0);
    rep(i, h) {
        rep(j, w) {
            int x;
            cin >> x;
            a[i][j] = x;
            sum_l[i] += x;
            sum_r[j] += x;
        }
    }

    rep(i, h) {
        rep(j, w) {
            cout << sum_l[i] + sum_r[j] - a[i][j];
            j < w - 1 ? cout << ' ' : cout << '\n';
        }
    }
    return 0;
}