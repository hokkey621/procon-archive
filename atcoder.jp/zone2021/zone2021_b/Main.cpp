#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); i++)


int main(void){
    int n;
    cin >> n;
    double D, H;
    cin >> D >> H;
    double r = 100100100;
    rep(i, n){
        double d, h;
        cin >> d >> h;
        r = min(r, (H - h)/(D - d));
    }
    double ans = H - r * D;
    ans = max(ans, 0.0);
    printf("%.15lf\n", ans);
    return 0;
}