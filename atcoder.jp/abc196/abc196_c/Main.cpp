#include <iostream>
#include <string>
using namespace std;
using ll = long long;


ll pow(int x){
    ll res = 1;
    for(int i = 0; i < x; i++) res *= 10;
    return res;
}


int main(void){
    ll n;
    cin >> n;
    int size = to_string(n).size();
    ll ans = 0;
    for(int i = 1; i < (size + 1) / 2; i++){
        ans *= 10;
        ans += 9;
    }
    if(size % 2 == 0){
        ll cnt = 0;
        for(ll num = pow(size/2 - 1); num < pow(size/2); num++){
            ll tmp = num + num * pow(size/2);
            if(tmp <= n) cnt++;
        }
        ans += cnt;
    }
    cout << ans << endl;
    return 0;
}