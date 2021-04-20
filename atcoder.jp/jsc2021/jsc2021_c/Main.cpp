#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); i++)


int main(void){
    int a, b;
    cin >> a >> b;
    int ans = 1;
    for(int c = 1; c <= b; c++){
        if((a + c - 1) / c < b / c) ans = c;
    }
    cout << ans << endl;
    return 0;
}