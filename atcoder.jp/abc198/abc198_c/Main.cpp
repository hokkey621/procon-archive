#include <iostream>
#include <cmath>
using namespace std;
using ll = long long;


int main(void){
    ll r, x, y;
    cin >> r >> x >> y;
    if(x * x + y * y < r * r) cout << 2 << endl;
    else cout << ceil(sqrt((double)(x * x + y * y) / (r * r))) << endl;
    return 0;
}
