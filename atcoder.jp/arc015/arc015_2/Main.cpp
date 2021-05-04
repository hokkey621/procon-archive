#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); i++)


int main(void){
    int n;
    cin >> n;
    int mosyo = 0, manatsu = 0, natsu = 0, nettaiya = 0, huyu = 0, mahuyu = 0;
    rep(i, n){
        double r, l;
        cin >> r >> l;
        if(35.0 <= r) mosyo++;
        if(30.0 <= r && r < 35.0) manatsu++;
        if(25.0 <= r && r < 30.0) natsu++;
        if(25.0 <= l) nettaiya++;
        if(l < 0 && 0 <= r) huyu++;
        if(r < 0) mahuyu++;
    }
    cout << mosyo << ' ' << manatsu << ' ' << natsu << ' ' << nettaiya << ' ' << huyu << ' ' << mahuyu << endl;
    return 0;
}