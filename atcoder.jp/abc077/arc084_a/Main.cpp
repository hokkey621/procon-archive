#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); i++)
using ll = long long;


int main(void){
    int n;
    cin >> n;
    vector<int>a(n);
    vector<int>b(n);
    vector<int>c(n);
    rep(i, n) cin >> a[i];
    rep(i, n) cin >> b[i];
    rep(i, n) cin >> c[i];
    sort(a.begin(), a.end());
    sort(c.begin(), c.end());

    ll x, y, ans = 0;
    rep(i, n){
        x = lower_bound(a.begin(), a.end(), b[i]) - a.begin();
        y = c.end() - upper_bound(c.begin(), c.end(), b[i]);
        ans += x * y;
    }
    cout << ans << endl;
    return 0;
}