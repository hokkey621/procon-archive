#include <iostream>
using namespace std;
using ll = long long;
const ll MOD = 1e9+7;


int main(void){
    ll a, b, c;
    cin >> a >> b >> c;
    a = (a * b) % MOD;
    a = (a * c) % MOD;
    cout << a << endl;
    return 0;
}