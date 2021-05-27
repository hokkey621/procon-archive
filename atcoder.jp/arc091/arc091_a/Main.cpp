#include <iostream>
using namespace std;
using ll = long long;


int main(void) {
    ll n, m;
    cin >> n >> m;
    if(m < n) swap(n, m);
    ll ans;
    if(n == 1) {
        if(m == 1) ans = 1;
        else ans = m - 2;
    } else {
        ans = (m - 2) * (n - 2);
    }
    
    cout << ans << endl;
    return 0;
}