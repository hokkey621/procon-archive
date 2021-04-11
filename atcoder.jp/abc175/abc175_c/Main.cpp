#include <iostream>
using namespace std;
using ll = long long;


int main(void){
    ll x, k, d;
    cin >> x >> k >> d;
    x = abs(x);
    ll first = min(k, x / d);
    k -= first;
    x -= first * d;

    if(k % 2 == 0) cout << x << endl;
    else cout << d - x << endl;
    return 0;
}