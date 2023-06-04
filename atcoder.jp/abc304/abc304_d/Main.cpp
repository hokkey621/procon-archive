#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;
#define rep(i, n) for(int i = 0; i < (n); ++i)
const ll MOD = 1000000007;


int main(void) {
    //入力
    int W, H, N;
    cin >> W >> H >> N;

    vector<int> p(N), q(N);
    rep(i, N) cin >> p[i] >> q[i];

    int A;
    cin >> A;
    vector<int> a(A);
    rep(i, A) cin >> a[i];
    int B;
    cin >> B;
    vector<int> b(B);
    rep(i, B) cin >> b[i];

    //ブロック該当座標を求める
    map<P, int> mp; //key:座標, value:いちごの個数
    rep(i, N) {
        int x = lower_bound(a.begin(), a.end(), p[i]) - a.begin();
        int y = lower_bound(b.begin(), b.end(), q[i]) - b.begin();
        mp[P(x,y)]++;
    }

    //最大値と最小値の当たりをつける
    int m = N;
    int M = 0;
    for(auto e: mp) {
        m = min(m, e.second);
        M = max(M, e.second);
    }
    if(mp.size() < (ll)(A+1)*(B+1)) m = 0;

    //出力
    cout << m << ' ' << M << endl;
    return 0;

}