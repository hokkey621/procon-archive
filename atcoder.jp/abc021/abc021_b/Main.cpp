#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); i++)


int main(void){
    int n;
    cin >> n;
    int cnt[110] = {0};
    int a, b;
    cin >> a >> b;
    cnt[a]++;
    cnt[b]++;
    int k;
    cin >> k;
    rep(i, k){
        int x;
        cin >> x;
        cnt[x]++;
    }

    bool can = true;
    rep(i, 110){
        if(2 <= cnt[i]) can = false;
    }
    if(can) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}