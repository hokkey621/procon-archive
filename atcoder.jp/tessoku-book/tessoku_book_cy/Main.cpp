#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;
#define rep(i, n) for(int i = 0; i < (n); ++i)
const ll MOD = 1000000007;


int main(void) {
    //入力
    int N;
    cin >> N;

    //エラトステネス
    vector<bool> num(N+1, true);
    for(int i = 2; i <= N; ++i) {
        if(!num[i]) continue;
        for(int j = 2; i * j <= N; ++j) {
            num[i * j] = false;
        }
    }

    //出力
    for(int i = 2; i <= N; ++i) {
        if(!num[i]) continue;
        cout << i << '\n';
    }

    return 0;
}