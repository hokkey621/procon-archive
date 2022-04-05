#include <iostream>
using namespace std;
using ll = long long;
const int INF = 1<<29;

int main(void) {
    ll N, A, B, C;
    cin >> N >> A >> B >> C;

    ll ans = INF;
    for(ll i = 0; i <= 9999; ++i) {
        for(ll j = 0; j <= 9999 - i; ++j) {
            ll k = (N - A * i - B * j) / C;
            if(N - A * i - B * j - C * k != 0 || k < 0 || 9999 < i + j + k) continue;
            ans = min(ans, i + j + k);
        }
    }


    cout << ans << endl;
    return 0;
}