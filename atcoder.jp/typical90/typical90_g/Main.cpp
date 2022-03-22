#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)


int main(void) {
    //入力
    int N;
    cin >> N;
    vector<int> A(N);
    rep(i, N) cin >> A[i];

    int Q;
    cin >> Q;
    vector<int > B(Q);
    rep(i, Q) cin >> B[i];

    //処理
    sort(A.begin(), A.end());
    

    //出力
    rep(i, Q) {
        int pos = lower_bound(A.begin(), A.end(), B[i]) - A.begin();
        if(pos == 0) {
            cout << abs(A[pos] - B[i]) << endl;
        } else {
            cout << min(abs(A[pos] - B[i]), abs(A[pos - 1] - B[i])) << endl;
        }
    }
    return 0;
}