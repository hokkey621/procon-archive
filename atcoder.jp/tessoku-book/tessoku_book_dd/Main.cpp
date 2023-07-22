#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;
#define rep(i, n) for(int i = 0; i < (n); ++i)
const ll MOD = 1000000007;


int main(void) {
    ll N;
    cin >> N;
    cout << (N / 3LL) + (N / 5LL) + (N / 7LL) - (N / 15LL) - (N / 21LL) - (N / 35LL) + (N / 105LL) << endl;
}