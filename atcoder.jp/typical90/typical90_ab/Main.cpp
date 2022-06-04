#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)


int main(void) {
    //入力
    int N;
    cin >> N;
    
    const int SIZE = 1000;
    vector<vector<int> > data(SIZE + 1, vector<int>(SIZE + 1, 0));
    rep(i, N) {
        int lx, ly, rx, ry;
        cin >> lx >> ly >> rx >> ry;
        data[ly][lx] += 1;
        data[ry][rx] += 1;
        data[ry][lx] -= 1;
        data[ly][rx] -= 1;
    }

    //処理
    for(int y = 0; y <= SIZE; ++y) {
        for(int x = 1; x <= SIZE; ++x) {
            data[y][x] += data[y][x - 1];
        }
    }

    for(int x = 0; x <= SIZE; ++x) {
        for(int y = 1; y <= SIZE; ++y) {
            data[y][x] += data[y - 1][x];
        }
    }

    vector<int> ans(N + 1);
    for(int y = 0; y <= SIZE; ++y) {
        for(int x = 0; x <= SIZE; ++x) {
            int num = data[y][x];
            if(num < 0) continue;

            ++ans[num];
        }
    }

    //結果出力
    for(int i = 1; i <= N; ++i) cout << ans[i] << endl;

    return 0;
}