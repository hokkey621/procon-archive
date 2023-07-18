#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;
#define rep(i, n) for(int i = 0; i < (n); ++i)
const ll MOD = 1000000007;


int gcd(int a, int b) {
    if(b == 0) return a;
    else return gcd(b, a % b);
}


int main(void) {
    //入力
    int A, B;
    cin >> A >> B;

    //gcd
    if(B < A) swap(A, B);
    cout << gcd(A, B) << endl;
    return 0;
}