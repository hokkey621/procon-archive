#include <iostream>
using namespace std;
using ll = long long;


int main(void){
    ll n;
    cin >> n;
    ll num[100] = {0};
    for(int i = 0; i < n; i++) cin >> num[i];
    double ans = (double)(-num[0] + num[n-1]) / (n-1);
    printf("%.12lf\n", ans);
    return 0; 
}