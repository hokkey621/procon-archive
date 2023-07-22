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
    string S;
    cin >> S;

    int cntA, cntB, cntC;
    cntA = cntB = cntC = 0;
    rep(i, N) {
        if(S[i] == 'A') ++cntA;
        else if(S[i] == 'B') ++cntB;
        else if(S[i] == 'C') ++cntC;

        if(1 <= cntA && 1 <= cntB && 1 <= cntC) {
            cout << i + 1 << endl;
            break;
        }
    }
    return 0;
}