#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;


int main(void) {
    double a, b, c, d;
    cin >> a >> b >> c >> d;
    int maxK = (int)ceil(-a / (b - c * d));
    for(int k = 0; k <= maxK + 1; ++k) {
        if(a + b * k <= c * k * d) {
            cout << k << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}