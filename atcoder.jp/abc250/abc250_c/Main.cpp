#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for(int i = 0; i < (n); ++i)
const ll MOD = 1000000007;


int main(void) {
    //入力
    int N, Q;
    cin >> N >> Q;
    vector<int> ball(N + 1), pos(N + 1);
    for(int i = 1; i <= N; ++i) {
        ball[i] = i;
        pos[i] = i;
    }


    //処理
    rep(i, Q) {
        int x;
        cin >> x;

        int l = ball[x];
        int r;
        if(ball[x] == N) {
            //右端
            r = l - 1;
        } else {
            r = l + 1;
        }
        int r_num = pos[r];

        swap(ball[x], ball[r_num]);
        swap(pos[l], pos[r]);
    }

    //結果出力
    for(int i = 1; i <= N; ++i) cout << pos[i] << endl;

    return 0;
}