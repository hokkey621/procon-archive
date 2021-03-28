#include <iostream>
#include <bitset>
#include <vector>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); i++)


int main(void){
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i, n) cin >> a[i];
    int ans = 1<<30;
    rep(s, 1<<(n-1)){
        int now = 0;
        int OR = 0;
        rep(i, n){
            OR |= a[i];
            if(s>>i&1){
                now ^= OR;
                OR = 0;
            }
        }
        now ^= OR;
        ans = min(ans, now);
    }
    cout << ans << endl;
    return 0;
}