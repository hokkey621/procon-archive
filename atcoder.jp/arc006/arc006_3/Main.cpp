#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)


int main(void){
    int n;
    cin >> n;
    const int MAX = 110000;
    vector<int>w(n, MAX);
    
    rep(i, n){
        int tmp;
        cin >> tmp;
        rep(j, n){
            if(tmp <= w[j]){
                w[j] = tmp;
                break;
            }
        }
    }

    int ans = 0;
    rep(i, n){
        if(w[i] != MAX)ans++;
    }
    cout << ans << endl;
    return 0;
}