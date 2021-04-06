#include <iostream>
#include <vector>
using namespace std;
using ll = long long;
#define rep(i, n) for(int i = 0; i < (n); i++)


int main(void){
    int n;
    cin >> n;
    vector<int> a(n);
    ll sum = 0;
    rep(i, n) {
        cin >> a[i];
        sum += a[i];
    }
    ll ans = sum;
    ll s = 0;
    rep(i, n){
        s += a[i];
        ans = min(ans, abs(s - (sum - s)));
    }
    cout << ans << endl;
    return 0;
}