#include <iostream>
#include <vector>
using namespace std;
using ll = long long;
const ll MOD = 1e9 + 7;


void getPrime(vector<int>& prime, int n){
    vector<bool>tmp(n + 1, true);
    tmp[0] = tmp[1] = false;
    for(int i = 2; i * i <= n; i++){
        if(tmp[i] == false)continue;
        for(int j = 2; i * j <= n; j++){
            tmp[i * j] = false;
        }
    }
    for(int i = 0; i <= n; i++){
        if(tmp[i] == true) prime.push_back(i);
    }
}


ll count(ll a, ll b){
    ll cnt = 0;
    while(0 < a){
        if(a % b == 0){
            cnt++;
            a /= b;
        }else{
            break;
        }
    }
    return cnt;
}


int main(void){
    int n;
    cin >> n;
    
    vector<int>prime;
    getPrime(prime, n);

    ll ans = 1;
    for(int i = 0; i < prime.size(); i++){
        ll cnt = 0;
        for(int num = 2; num <= n; num++){
            cnt += count(num, prime[i]);
        }
        ans = (ans * (cnt + 1)) % MOD;
    }
    cout << ans << endl;
    return 0;
}