#include <iostream>
#include <string>
#include <vector>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); i++)


int main(void){
    int h, w;
    cin >> h >> w;
    vector<string>a(h);
    rep(i, h) cin >> a[i];
    vector<int>cntRow(h, 0);
    vector<int>cntColumn(w, 0);

    rep(i, h){
        rep(j, w){
            if(a[i][j] == '#'){
                cntRow[i]++;
                cntColumn[j]++;
            }
        }
    }

    rep(i, h){
        if(cntRow[i] == 0) continue;
        rep(j, w){
            if(cntColumn[j] == 0)continue;
            cout << a[i][j];
        }
        cout << '\n';
    }
    return 0;
}