#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)


int main(void) {
    //入力
    int N, Q;
    cin >> N >> Q;
    vector<int> A(N);
    rep(i, N) cin >> A[i];

    //計算処理
    int shift = 0;

    rep(i, Q) {
        int T, x, y;
        cin >> T >> x >> y;
        --x;
        --y;

        switch (T) {
            case 1:
                swap(A[(x + shift) % N], A[(y + shift) % N]);
                break;
            case 2:
                shift = (shift + N - 1) % N;
                break;
            case 3:
                cout << A[(x + shift) % N]<< endl;
                break;
            default:
                break;
        }
    }

    return 0;
}