#include <iostream>
#include <vector>
using namespace std;
using ll = long long;
#define rep(i, n) for(int i = 0; i < (n); i++)


ll calc(ll x){
    if (x == 0 || x == 1) return 0;
    return x * (x - 1) / 2;
}


int main(void){
    int n;
    cin >> n;
    ll cnt[210000] = {0};
    vector<ll> a(n);
    rep(i, n){
        cin >> a[i];
        cnt[a[i]]++;
    }

    ll sum = 0;
    rep(i, 200001){
        sum += calc(cnt[i]);
    }
    
    rep(k, n){
        cout << sum - calc(cnt[a[k]]) + calc(cnt[a[k]] - 1) << endl;
    }
    return 0;
}