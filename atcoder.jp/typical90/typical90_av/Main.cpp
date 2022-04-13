#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;
#define rep(i, n) for(int i = 0; i < (n); ++i)


int main(void) {
    //入力
    int N, K;
    cin >> N >> K;

    vector<int> vec;
    rep(i, N) {
        int a, b;
        cin >> a >> b;
        int c = a - b;
        vec.push_back(b);
        vec.push_back(c);
    }

    //計算処理
    sort(vec.begin(), vec.end(), greater<int>());

    ll ans = 0;
    rep(i, K) {
        ans += vec[i];
    }

    //結果出力
    cout << ans << endl;
    return 0;
}