#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); i++)


int main(void){
    bool prime[110000];
    for ( int i = 2; i <= 100000; i++){
        if (! prime [ i ]) {
            for ( int j = i + i ;j <=100000; j += i )prime[ j ]= true ;
        }
    }
    
    int sum[110000] = {0};
    for(int i = 3; i <= 100000; i += 2){
        if(!prime[i] && !prime[(i + 1) / 2])sum[i]++;
    }
    for(int i = 3; i <= 100000; i++){
        sum[i] += sum[i - 1];
    }
    
    int q;
    cin >> q;
    rep(i, q){
        int l, r;
        cin >> l >> r;
        cout << sum[r] - sum[l - 1] << endl;
    }
    
    return 0;
}