#include <iostream>
using namespace std;
using ll = long long;


ll gcd(ll a, ll b){
    if(b == 0)return a;
    else return gcd(b, a % b);
}


int main(void){
    ll n, x;
    cin >> n >> x;
    cout << 3 * (n - gcd(n, x)) << endl;
    return 0;
}