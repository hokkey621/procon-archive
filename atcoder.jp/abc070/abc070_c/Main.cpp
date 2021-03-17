#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
using ull = unsigned long long;
#define rep(i, n) for(int i = 0; i < (n); i++)


ull gcd(ull a, ull b){
    if(b == 0)return a;
    else return gcd(b, a % b);
}

int main(void){
    int n;
    cin >> n;
    vector<ull>t(n);
    rep(i, n) cin >> t[i];
    sort(t.begin(), t.end());

    ull res = t[0];
    for(int i = 1; i < n; i++){
        res = t[i] / gcd(t[i], res) * res;
    }
    cout << res << endl;
    return 0;
}