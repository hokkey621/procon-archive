#include <iostream>
using namespace std;
using ll = long long;


ll gcd(ll x, ll y) {
    if(x % y == 0)return y;
    return gcd(y, x % y);
}


int main(void) {
    ll a, b, c;
    cin >> a >> b >> c;

    ll x = gcd(gcd(a, b), c);

    cout << a / x + b / x + c / x - 3 << endl;
    return 0;
}