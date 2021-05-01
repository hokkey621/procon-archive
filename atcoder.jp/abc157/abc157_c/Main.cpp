#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); i++)


int main(void){
    int n, m;
    cin >> n >> m;
    if(n == 1 && m == 0){
        cout << 0 << endl;
        return 0;
    }
    vector<int> num(n, -1);
    bool can = true;
    rep(i, m){
        int s, c;
        cin >> s >> c;
        s--;
        if(num[s] == -1 || num[s] == c){
            num[s] = c;
        }else{
            can = false;
        }
    }
    if(1 < n && num[0] == 0) can = false;
    if(num[0] == -1) num[0] = 1;
    for(int i = 1; i < n; i++) if(num[i] == -1) num[i] = 0;
    if(can){
        rep(i, n) cout << num[i];
    }else{
        cout << -1;
    }
    cout << '\n';
    return 0;
}