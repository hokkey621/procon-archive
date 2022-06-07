#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)


int main(void) {
    //入力
    int N, K;
    cin >> N >> K;
    vector<int> a(N);
    rep(i, N) cin >> a[i];

    //処理
    map<int, int> mp;
    int res = 0;
    int cr = 0;
    int cnt = 0;

    rep(i, N) {
        while(cr < N) {
            if(mp[a[cr]] == 0 && cnt == K) break;

            if (mp[a[cr]] == 0) ++ cnt; //既出の文字ではなければ増やす
            mp[a[cr]] += 1;
            ++cr;
        }

        res = max(res, cr - i);
        if(mp[a[i]] == 1) --cnt;
        mp[a[i]] -= 1;
    }

    //結果出力
    cout << res << endl;
    return 0;
}