#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;
#define rep(i, n) for(int i = 0; i < (n); ++i)
const ll MOD = 1000000007;


int main(void) {
    int N, K;
    cin >> N >> K;

    int ans = 0;
    for(int x = 1; x <= N; ++x) {
        for(int y = 1; y <= N; ++y) {
            int z = K - x - y;
            if(1 <= z && z <= N) ++ans;
        }
    }
    cout << ans << endl;
    return 0;
}