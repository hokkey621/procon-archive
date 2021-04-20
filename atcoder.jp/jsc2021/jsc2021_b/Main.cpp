#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); i++)


int main(void){
    int n,m;
    cin >> n >> m;
    vector<bool> checkA(1100, false);
    vector<bool> checkB(1100, false);
    rep(i, n){
        int a;
        cin >> a;
        checkA[a] = true;
    }
    rep(i, m){
        int b;
        cin >> b;
        checkB[b] = true;
    }
    rep(i, 1001){
        if((checkA[i] == true && checkB[i] == false) || (checkA[i] == false && checkB[i] == true)) cout << i << endl;
    }
    return 0;
}