#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;
#define rep(i, n) for(int i = 0; i < (n); ++i)
#define rep2(i, a, b) for(int i = (a); i < (b); ++i)
const ll MOD = 1000000007;


int main(void) {
    int Q;
    cin >> Q;

    queue<string> que;

    rep(i, Q) {
        int type;
        cin >> type;
        if(type == 1) {
            string x;
            cin >> x;
            que.push(x);
        } else if(type == 2) {
            cout << que.front() << endl;
        } else {
            que.pop();
        }
    }

    return 0;
}