#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); i++)
using ll = long long;


int main(void){
    int n, t;
    cin >> n >> t;
    vector<int>a(n);
    rep(i, n) cin >> a[i];

    ll ans = 0;
    rep(i, n - 1){
        if(a[i + 1] <= a[i] + t) ans += a[i + 1] - a[i];
        else ans += t;
    }
    ans += t;
    cout << ans << endl;
    return 0;
}