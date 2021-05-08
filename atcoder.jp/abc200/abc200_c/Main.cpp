#include <iostream>
using namespace std;
using ll = long long;
#define rep(i, n) for(int i = 0; i < (n); i++)


ll comb(ll x){
    return x * (x-1) / 2;
}


int main(void){
    int n;
    cin >> n;
    ll cnt[200] = {0};
    rep(i, n){
        int x;
        cin >> x;
        cnt[x%200]++;
    }

    
    ll ans = 0;
    rep(i, 200){
        ans += comb(cnt[i]);
    }
    cout << ans << endl;
    return 0;
}