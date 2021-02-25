#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)


int main(void){
    int n;
    cin >> n;
    vector<pair<ll, ll> >p(n);
    rep(i, n){
        int x, l;
        cin >> x >> l;
        p[i] = make_pair(x + l, x - l);
    }

    sort(p.begin(), p.end());

    int ans = 0;
    ll cur = -1100000000;
    rep(i, n){
        if(cur <= p[i].second){
            ans++;
            cur = p[i].first;
        }
    }
    cout << ans << endl;
    return 0;
}
