#include <iostream>
#include <cmath>
#include <vector>
#include <set>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
typedef long long ll;


int main(void){
    ll n;
    cin >> n;
    set <ll> ls;

    ll max = 2;
    while(max * max <= n){
        max++;
    }
    max--;
    for(ll i = 2; i <= max; i++){
        ll tmp = i * i;
        while(tmp <= n){
            ls.insert(tmp);
            tmp *= i;
        }
    }

    cout << n - ls.size() << endl;
    return 0;
}