#include <iostream>
using namespace std;


int main(void){
    int n;
    cin >> n;
    int ans = 0;
    for(int i = 1; i <= n; i += 2){
        int cnt = 0;
        for(int j = 1; j * j <= i; j++){
            if(i % j == 0){
                cnt++;
                if(i / j != j)cnt++;
            }
        }
        if(cnt == 8){
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}