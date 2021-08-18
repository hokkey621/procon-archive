#include <iostream>
#include <string>
using namespace std;
using ll = long long;
#define rep(i, n) for(int i = 0; i < (n); ++i)


int main(void) {
    string n;
    int k;
    cin >> n >> k;

    if(n == "0") {
        cout << 0 << endl;
        return 0;
    }

    rep(i, k) {
        // 8->10
        ll res = 0;
        rep(j, n.size()) {
            res *= 8;
            res += (n[j] - '0');
        }
        
        // 10->9
        string ans;
        while(0 < res) {
            ans = char(res % 9 + '0') + ans;
            res /= 9;
        }

        // '5'->'8'
        rep(j, ans.size()) {
            if(ans[j] == '8') ans[j] = '5';
        }
        n = ans;
    }
    cout << n << endl;
    return 0;
}