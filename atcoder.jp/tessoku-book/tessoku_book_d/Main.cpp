#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;
#define rep(i, n) for(int i = 0; i < (n); ++i)
const ll MOD = 1000000007;


int main(void) {
    int N;
    cin >> N;

    for(int i = 9; 0 <= i; --i) {
        int div = (1<<i);
        cout << (N / div) % 2;
    }
    cout << '\n';
    return 0;
}