#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for(int i = 0; i < (n); ++i)
const ll MOD = 1000000007;


int main(void) {
    //入力
    int N, A, B;
    cin >> N >> A >> B;

    int H = A * N;
    int W = B * N;
    //出力
    bool tmp_color = true;
    rep(i, N) {
        rep(h, A) {
            bool color = tmp_color;
            rep(j, N) {
                rep(w, B) {
                    if(color) cout << '.';
                    else cout << '#';
                }
            color ^= 1;
            }
            cout << '\n';
        }
        tmp_color ^= 1;
    }
    
    return 0;
}