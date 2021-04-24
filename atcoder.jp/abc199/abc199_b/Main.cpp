#include <iostream>
#include <string>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); i++)


int main(void){
    int n;
    cin >> n;
    int x = 0,y = 10000;
    rep(i, n){
        int a;
        cin >> a;
        x = max(x, a);
    }
    rep(i, n){
        int b;
        cin >> b;
        y = min(y, b);
    }
    cout << max(0, y - x + 1) << endl;
    return 0;
}