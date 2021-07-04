#include <iostream>
using namespace std;
using ll = long long;


int main(void) {
    ll p;
    cin >> p;
    
    ll x[11];
    x[0] = 1;
    for(int i = 1; i <= 10; ++i) x[i] = x[i-1] * i;

    ll ans = 0;
    for(int i = 10; 1 <= i && 0 < p; --i) {
        ll times = p / x[i];
        ans += times;
        p -= times * x[i];
    }

    cout << ans << endl;
    return 0;
}