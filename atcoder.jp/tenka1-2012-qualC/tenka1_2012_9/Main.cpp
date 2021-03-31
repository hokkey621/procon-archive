#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); i++)


int main(void){
    int n;
    cin >> n;
    vector<bool> prime(n, true);
    prime[0] = prime[1] = false;
    for(int i = 2; i < n; i++){
        if(!prime[i]) continue;
        for(int j = 2; i * j <= n; j++) prime[i * j] = false;
    }
    int cnt = 0;
    rep(i, n) if(prime[i]) cnt++;
    cout << cnt << endl;
    return 0;
}