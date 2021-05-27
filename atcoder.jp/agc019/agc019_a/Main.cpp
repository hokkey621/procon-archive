#include <iostream>
#include <algorithm>
using namespace std;
using ll = long long;


int main(void) {
    ll q, h, s, d, n;
    cin >> q >> h >> s >> d >> n;
    
    ll oneLiter = min({q * 4, h * 2, s});
    ll twoLiter = min(oneLiter * 2, d);
    ll ans = twoLiter * (n / 2);
    if(n % 2 != 0) ans += oneLiter;
    cout << ans << endl;
    return 0;
}