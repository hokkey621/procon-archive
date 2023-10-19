#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;
#define rep(i, n) for(int i = 0; i < (n); ++i)
#define rep2(i, a, b) for(int i = (a); i < (b); ++i)
const ll MOD = 1000000007;


int main(void) {
    int N, K;
    cin >> N >> K;
    if(K % 2 == 0 && (2 * N - 2) <= K) cout << "Yes" << endl;    
    else cout << "No" << endl;
    return 0;
}