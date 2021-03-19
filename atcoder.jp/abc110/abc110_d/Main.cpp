#include <iostream>
#include <vector>
#include <map>
using namespace std;
using ll = long long;
const ll MOD = 1e9 + 7;

/*
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
*/


ll modpow(int num, int p){
    if (p == 0)
        return (1);
    if (p % 2 == 0){
        int halfp = p / 2;
        ll half = modpow(num, halfp);
        return half * half % MOD;
    }
    else
        return num * modpow(num, p - 1) % MOD;
}


ll calcComb(int n, int k){
    if (k > n - k)
        calcComb(n, n - k);
    ll ansMul = 1, ansDiv = 1;
    for(int i = 0; i < k; i++){
        ansMul *= (n - i);
        ansDiv *= (k - i);
        ansMul %= MOD;
        ansDiv %= MOD;
    }
    ll ans = ansMul * modpow(ansDiv, MOD - 2) % MOD;
    return ans;
}


int main(void){
    int n, m;
    cin >> n >> m;
    map<int, int> mp;
    int tmp = m;
    for(int num = 2; num * num <= m; num++){
        while(tmp % num == 0){
            mp[num]++;
            tmp /= num;
        }
    }
    if(tmp != 1)mp[tmp]++;

    ll ans = 1;
    for(auto b : mp){
        ans = (ans * calcComb(b.second + n - 1, b.second)) % MOD;
    }
    cout << ans << endl;
    return 0;
}