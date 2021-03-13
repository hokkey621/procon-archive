#include <iostream>
#include <string>
using namespace std;
using ll = unsigned long long;

int main(void){
    ll n;
    cin >> n;
    ll cnt = 0;
    ll x = 1000;
    for(int i = 1; i <= 5; i++){
        if(x <= n){
            if(n < x * 1000)cnt += (n - x + 1) * i;
            else cnt += (x * 1000 - 1 - x + 1) * i;
        }
        x *= 1000;
    }
    cout << cnt << endl;
    return 0;
}