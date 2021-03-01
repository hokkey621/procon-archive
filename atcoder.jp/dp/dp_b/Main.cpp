#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
#define rep(i, n) for(ll i = 0; i < (ll)(n); i++)
typedef long long ll;
const ll INF = 1LL << 60;


int main(void){
    ll n, k;
    cin >> n >> k;
    vector<ll>h(n);
    rep(i, n)cin >> h[i];

    vector<ll>memo(n);
  	rep(i,n)memo[i] = INF;
    memo[0] = 0;
    for(ll i = 1; i < n; i++){
        for(ll j = 1; j <= k; j++){
            if(j <= i){
                memo[i] = min(memo[i], memo[i - j] + abs(h[i - j] - h[i]));
            }
        }
    }
    cout << memo[n - 1] << endl;
    return 0;
}