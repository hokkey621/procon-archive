#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); i++)



int main(void){
    int m, n, N;
    cin >> m >> n >> N;
    int ans = 0;
    int keep = 0;
    while(m <= keep + N){
        ans += N;
        N += keep;
        keep = N % m;
        N = N / m * n;
    }
    ans += N;
    cout << ans << endl;
    return 0;
}