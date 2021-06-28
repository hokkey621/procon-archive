#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)


int main(void) {
    int n;
    cin >> n;
    vector<int> sum1(n+1), sum2(n+1);
    sum1[0] = sum2[0] = 0;
    rep(i, n) {
        int c, p;
        cin >> c >> p;
        if(c == 1) {
            sum1[i+1] = sum1[i] + p;
            sum2[i+1] = sum2[i];
        } else {
            sum1[i+1] = sum1[i];
            sum2[i+1] = sum2[i] + p;
        }
    }
    int q;
    cin >> q;
    rep(i, q) {
        int a, b;
        cin >> a >> b;
        cout << sum1[b] - sum1[a-1] << ' ' << sum2[b] - sum2[a-1] << endl;
    }
    return 0;
}