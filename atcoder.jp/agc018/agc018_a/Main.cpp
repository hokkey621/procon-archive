#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); i++)


int gcd(int a, int b){
    if(b == 0)return a;
    else return gcd(b, a % b);
}


int main(void){
    int n, k;
    cin >> n >> k;
    vector<int>a(n);
    rep(i, n) cin >> a[i];
    sort(a.begin(), a.end());

    int g = 0;
    rep(i, n){
        g = gcd(g, a[i]);
    }

    if(k % g == 0 && k <= a[n - 1])cout << "POSSIBLE" << endl;
    else cout << "IMPOSSIBLE" << endl;
    return 0;
}