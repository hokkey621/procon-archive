#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)


int main(void){
    int n;
    cin >> n;
    vector<int>h(n);
    rep(i, n)cin >> h[i];

    vector<int>memo(n);
    memo[0] = 0;
    memo[1] = abs(h[1] - h[0]);
    for(int i = 2; i < n; i++){
        int a, b;
        a = memo[i - 1] + abs(h[i] - h[i - 1]);
        b = memo[i - 2] + abs(h[i] - h[i - 2]);
        memo[i] = min(a, b);
    }
    cout << memo[n - 1] << endl;
    return 0;
}