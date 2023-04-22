#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;
#define rep(i, n) for(int i = 0; i < (n); ++i)
const ll MOD = 1000000007;


int main(void) {
    //入力
    int N, T;
    cin >> N >> T;
    vector<int> C(N), R(N);
    bool t_select = false;
    rep(i, N) {
        cin >> C[i];
        if(C[i] == T) t_select = true;
    }
    rep(i, N) cin >> R[i];

    //処理
    if(t_select) {
        int max_v = 0, max_i = 0;
        rep(i, N) {
            if(C[i] == T) {
                if(R[i] > max_v) {
                    max_v = R[i];
                    max_i = i;
                }
            }
        }
        cout << max_i + 1 << endl;
    } else {
        int target = C[0];
        int max_v = C[0], max_i = 0;
        rep(i, N) {
            if(C[i] == target) {
                if(R[i] > max_v) {
                    max_v = R[i];
                    max_i = i;
                }
            }
        }
        cout << max_i + 1 << endl;
    }
    return 0;
}