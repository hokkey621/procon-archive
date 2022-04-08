#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
const int INF = 1<<29;


int main(void) {
    //入力
    int N;
    cin >> N;
    vector<vector<int> > A(N+1, vector<int>(N+1));
    for(int  i = 1; i <= N; ++i) {
        for(int j = 1; j <= N; ++j) {
            cin >> A[i][j];
        }
    }

    int M;
    cin >> M;
    vector<vector<bool> > check(N+1, vector<bool>(N+1, true));
    rep(i, M) {
        int x, y;
        cin >> x >> y;
        check[x][y] = check[y][x] = false;
    }

    vector<int> num(N);
    rep(i, N) num[i] = i + 1;

    //計算処理
    int ans = INF;
    do {
        bool can = true;
        int tmp = 0;
        rep(i, N) {
            if(i < N - 1 && check[num[i]][num[i+1]] == false) can = false;

            tmp += A[num[i]][i+1];
        }
        if(can) ans = min(ans, tmp);
    } while (next_permutation(num.begin(), num.end()));
    
    //結果出力
    if(ans== INF) cout << -1 << endl;
    else cout << ans << endl;
    
    return 0;
}