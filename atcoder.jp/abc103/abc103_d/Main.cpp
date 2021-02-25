#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)


int main(void){
    int n, m;
    cin >> n >> m;
    vector<pair<int, int> >p(m);
    rep(i, m){
        int a, b;
        cin >> a >> b;
        p[i] = make_pair(b, a);
    }

    sort(p.begin(), p.end());

    int brige = -1;
    int ans = 0;
    rep(i, m){
        if(brige -1 < p[i].second){
            brige = p[i].first;
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}