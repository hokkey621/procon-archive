#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;
#define rep(i, n) for(int i = 0; i < (n); ++i)
#define rep2(i, a, b) for(int i = (a); i < (b); ++i)
const ll MOD = 1000000007;


int main(void) {
    // input;
    int N, X;
    cin >> N >> X;
    string A;
    cin >> A;
    A = '$' + A;

    // solve
    queue<int> que;

    que.push(X);
    A[X] = '@';

    while(!que.empty()) {
        int pos = que.front();
        que.pop();
        
        if(A[pos - 1] == '.') {
            A[pos - 1] = '@';
            que.push(pos - 1);
        }
        if(A[pos + 1] == '.') {
            A[pos + 1] = '@';
            que.push(pos + 1);
        }
    }

    // output
    cout << A.substr(1) << endl;
    return 0;
}