#include <iostream>
using namespace std;
using ll = long long;
#define rep(i, n) for(int i = 0; i < (n); ++i)



int main(void) {
    int n, k;
    cin >> n >> k;
    int a[1000], b[1000];
    rep(i, n) {
        cin >> a[i];
    }
    rep(i, n) {
        cin >> b[i];
    }

    rep(i, n) {
        k -= abs(b[i] - a[i]);
    }

    if(k < 0 || k % 2 != 0) cout << "No" << endl;
    else cout << "Yes" << endl;
    return 0;
}