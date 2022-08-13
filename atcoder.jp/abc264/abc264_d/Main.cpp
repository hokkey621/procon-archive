#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;
#define rep(i, n) for(int i = 0; i < (n); ++i)
const ll MOD = 1000000007;


int main(void) {
    //入力
    string T = "atcoder";
    string S;
    cin >> S;
    int size = T.size();

    //処理
    vector<int> num(size);
    rep(i, size) {
        int idx = 0;
        while(S[i] != T[idx]) ++idx;
        num[i] = idx;
    }

    int cnt = 0;
    for(int i = 0; i < size; ++i) {
        for(int j = i + 1; j < size; ++j) {
            if(num[i] > num[j]) ++cnt;
        }
    }

    //結果出力
    cout << cnt << endl;
    return 0;
}