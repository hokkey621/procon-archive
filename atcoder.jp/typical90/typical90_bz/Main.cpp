#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for(int i = 0 ;i < (n); ++i)


int main(void) {
    int n, m;
    cin >> n >> m;
    vector<int> num(n+1);

    rep(i, m) {
        int a, b;
        cin >> a >> b;
        ++num[max(a, b)];
    }

    int ans = 0;
    rep(i, n+1) {
        if(num[i] == 1) ++ans;
    }

    cout << ans << endl;
    return 0;
}