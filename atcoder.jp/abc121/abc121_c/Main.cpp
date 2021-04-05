#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
using ll = long long;
#define rep(i, n) for(int i = 0; i < (n); i++)


int main(void){
    ll n, m;
    cin >> n >> m;
    vector<pair<ll, ll> > data(n);
    rep(i, n) {
        ll a, b;
        cin >> a >> b;
        data[i] = make_pair(a, -b);
    }

    sort(data.begin(), data.end());
    rep(i, n) {
        data[i].second *= -1;
    }


    ll ans = 0;
    rep(i, n) {
        if(data[i].second < m) {
            m -= data[i].second;
            ans += data[i].first * data[i].second;
        }else{
            ans += data[i].first * m;
            break;
        }
    }
    cout << ans << endl;
    return 0;
}