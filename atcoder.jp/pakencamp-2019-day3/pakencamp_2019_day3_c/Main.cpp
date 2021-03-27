#include <iostream>
#include <vector>
using namespace std;
using ll = long long;
#define rep(i, n) for(int i = 0; i < (n); i++)


int main(void){
    int n, m;
    cin >> n >> m;
    vector<vector<int> >a(n, vector<int>(m));
    rep(i, n){
        rep(j, m) cin >> a[i][j];
    }
    ll ans = 0;
    for(int i = 0; i < m - 1; i++){
        for(int j = i + 1; j < m; j++){
            ll tmp = 0;
            rep(k, n) tmp += max(a[k][i], a[k][j]);
            ans = max(tmp, ans);
        }
    }
    cout << ans << endl;
    return 0;
}