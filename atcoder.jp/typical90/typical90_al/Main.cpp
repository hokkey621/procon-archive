#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;
#define rep(i, n) for(int i = 0; i < (n); ++i)


ull gcd(ull x, ull y) {
    if(y == 0) return x;
    else return gcd(y, x % y);
}


ull lcm(ull x, ull y) {
    return (x / gcd(x, y)) * y;
}


int main(void) {
    //入力
    ull A, B;
    cin >> A >> B;

    ull x = B / gcd(A, B);

    //結果出力
    if(x > 1000000000000000000ULL / A) cout << "Large" << endl;
    else cout << x * A << endl;

    return 0;
}