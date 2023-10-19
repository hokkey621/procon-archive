#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;
#define rep(i, n) for(int i = 0; i < (n); ++i)
#define rep2(i, a, b) for(int i = (a); i < (b); ++i)
const ll MOD = 1000000007;


int main(void) {
    // input
    int N, K;
    string S;
    cin >> N >> K >> S;

    // solve
    // count the number of 1 in S
    int count_1 = count(S.begin(), S.end(), '1');

    // output
    // if count_1 and K are both even or odd, then Yes
    if(count_1 % 2 == K % 2) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}