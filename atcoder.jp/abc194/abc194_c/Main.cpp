#include <iostream>
using namespace std;
using ll = long long;
#define rep(i, n) for(int i = 0; i < (n); i++)


int main(void){
    int n;
    cin >> n;
    ll sum1 = 0, sum2 = 0;
    rep(i, n){
        int a;
        cin >> a;
        sum1 += a * a;
        sum2 += a;
    }
    cout << n * sum1 - sum2 * sum2 << endl;
    return 0;
}