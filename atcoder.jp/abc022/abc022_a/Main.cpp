#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); i++)


int main(void){
    int n, s, t;
    cin >> n >> s >> t;
    int w;
    cin >> w;
    int cnt = 0;
    if(s <= w && w <= t) cnt++;
    rep(i, n - 1){
        int a;
        cin >> a;
        w = max(0, w + a);
        if(s <= w && w <= t) cnt++;
    }
    cout << cnt << endl;
    return 0;
}