#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;
#define rep(i, n) for(int i = 0; i < (n); ++i)
const ll MOD = 1000000007;


int main(void) {
    int N;
    cin >> N;

    rep(i, 7) {
        if(N <= (int)pow(10, 3 + i) - 1) {
            int d = (int)pow(10, i);
            N = N - (N % d);
            break;
        }
    }

    cout << N << endl;
    return 0;
}