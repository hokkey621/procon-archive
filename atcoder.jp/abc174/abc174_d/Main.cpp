#include <iostream>
#include <string>
#include <vector>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
const int INF = 100100100;


int main(void) {
    int n;
    cin >> n;
    string c;
    cin >> c;
    vector<int> countR(n+1);
    vector<int> countW(n+1);
    countR[0] = countW[0] = 0;
    rep(i, n) {
        if(c[i] == 'R') {
            countR[i+1] = countR[i] + 1;
            countW[i+1] = countW[i];
        }else{
            countW[i+1] = countW[i] + 1;
            countR[i+1] = countR[i];
        }
    }

    int ans = INF;
    rep(i, n + 1) {
        int tmp = max(countW[i], countR[n] - countR[i]);
        ans = min(ans, tmp);
    }

    cout << ans << endl;
    return 0;
}