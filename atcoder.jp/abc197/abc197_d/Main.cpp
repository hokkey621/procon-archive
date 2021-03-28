#include <iostream>
#include <complex>
#include <cmath>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); i++)
using C = complex<double>;


C inputC(){
    double x, y;
    cin >> x >> y;
    return C(x, y);
}


int main(void){
    int n;
    cin >> n;
    C s = inputC();
    C t = inputC();
    C o = (s + t) / 2.0;
    double rad = 2 * M_PI / n;
    C r(cos(rad), sin(rad));
    C ans = o + (s - o) * r;
    printf("%.11lf %.11lf\n", ans.real(), ans.imag());
    return 0;
}