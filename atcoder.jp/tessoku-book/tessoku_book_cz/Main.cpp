#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;
#define rep(i, n) for(int i = 0; i < (n); ++i)
const ll MOD = 1000000007;


ll gcd(ll a, ll b) {
    if(b == 0LL) return a;
    else return gcd(b, a % b);
}


int main(void) {
    //入力
    ll A, B;
    cin >> A >> B;

    //LCM
    if(B < A) swap(A, B);
    cout << A * B / gcd(A, B) << endl;
}