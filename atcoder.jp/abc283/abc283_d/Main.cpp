#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;
#define rep(i, n) for(int i = 0; i < (n); ++i)
const ll MOD = 1000000007;


int main(void) {
    string S;
    cin >> S;
    int N = S.size();
    S = 'X' + S; //ダミー文字

    vector<int> idx_l, idx_r;
    vector<int> alpha(26, -1);

    for(int i = 1; i <= N; ++i) {
        if(S[i] == '(') {
            idx_l.push_back(i);
        } else if(S[i] == ')') {
            idx_r.push_back(i);
            int j = idx_l[(int)idx_r.size() - 1];
            rep(k, 26) {
                if(alpha[k] == -1) continue;
                else {
                    if(j <= alpha[k] && alpha[k] <= i) {
                        alpha[k] = -1;
                    }
                }
            }

        } else {
            if(alpha[S[i] - 'a'] != -1) {
                cout << "No" << endl;
                return 0;
            } else {
                alpha[S[i] - 'a'] = i;
            }
        }
    }

    cout << "Yes" << endl;
    return 0;
}