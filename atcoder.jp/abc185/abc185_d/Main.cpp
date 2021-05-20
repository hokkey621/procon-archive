#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); i++)
const int INF = 1010101010;


int main(void){
    int n, m;
    cin >> n >> m;
    vector<int> a(m + 2);
    a[0] = 0;
    rep(i, m) cin >> a[i + 1];
    a[m + 1] = n + 1;
    sort(a.begin(), a.end());

    vector<int> diff;
    int k = INF;
    rep(i, m + 1) {
        int x = a[i + 1] - a[i] - 1;
        if(x < 1) continue;
        diff.push_back(x);
        k = min(k, x);
    }
    
    if(k == INF) cout << 0 << endl;
    else{
        int ans = 0;
        rep(i, diff.size()){
            ans += (diff[i] + k - 1) / k;
        }
        cout << ans << endl;
    }
    return 0;
}