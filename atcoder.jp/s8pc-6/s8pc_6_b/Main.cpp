#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
using ll = long long;
#define rep(i, n) for(int i = 0; i < (n); i++)


int main(void){
    int n;
    cin >> n;
    vector<ll>a(n);
    vector<ll>b(n);
    ll ans = 0;
    rep(i, n){
        cin >> a[i] >> b[i];
        ans += abs(a[i] - b[i]);
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    ll medianA = a[n/2];
    ll medianB = b[n/2];
    
    rep(i, n) ans += abs(a[i] - medianA);
    rep(i, n) ans += abs(b[i] - medianB);
    cout << ans << endl;
    return 0;
}