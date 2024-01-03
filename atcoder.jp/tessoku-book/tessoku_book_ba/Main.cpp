#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;
#define rep(i, n) for(int i = 0; i < (n); ++i)
#define rep2(i, a, b) for(int i = (a); i < (b); ++i)
const ll MOD = 1000000007;


int main(void) {
    // input
    int Q;
    cin >> Q;
    priority_queue<int, vector<int>, greater<int>> pq;
    rep(i, Q) {
        int type;
        cin >> type;
        if(type == 1) {
            int x;
            cin >> x;
            pq.push(x);
        } else if(type == 2) {
            cout << pq.top() << endl;
        } else {
            pq.pop();
        }
    }
    return 0;
}