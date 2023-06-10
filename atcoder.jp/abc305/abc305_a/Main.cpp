#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;
#define rep(i, n) for(int i = 0; i < (n); ++i)
const ll MOD = 1000000007;


int main(void) {
    int N;
    cin >> N;

    int x = N % 5;
    if(x == 0) cout << N << endl;
    else if(x == 1) cout << N - 1 << endl;
    else if(x == 2) cout << N - 2 << endl;
    else if(x == 3) cout << N + 2 << endl;
    else if(x == 4) cout << N + 1 << endl;
    return 0;
}