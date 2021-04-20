#include <iostream>
using namespace std;


int main(void){
    int x, y, z;
    cin >> x >> y >> z;
    int ans = z * y / x;
    if(y * z % x == 0) ans--;
    cout << ans << endl;
    return 0;
}