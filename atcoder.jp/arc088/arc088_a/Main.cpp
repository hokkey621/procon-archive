#include <iostream>
using namespace std;
using ll = long long;


int main(void){
    ll x, y;
    cin >> x >> y;
    ll cnt = 0;
    while (x <= y){
        x *= 2;
        cnt++;
    }
    cout << cnt << endl;
    return 0;
}