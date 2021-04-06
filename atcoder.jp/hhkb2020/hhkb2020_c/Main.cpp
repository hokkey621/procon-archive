#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); i++)


int main(void){
    int n;
    cin >> n;
    vector<int> p(n);
    rep(i, n) cin >> p[i];
    int ans = 0;
    vector<bool> check(210000, true);
    rep(i, n) {
        check[p[i]] = false;
        while(!check[ans]) ans++;
        cout << ans << endl;
    }
    return 0;
} 