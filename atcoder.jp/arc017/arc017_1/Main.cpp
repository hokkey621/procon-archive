#include <iostream>
using namespace std;


int main(void){
    int n;
    cin >> n;
    bool can = true;
    if(n % 2 == 0)can = false;
    for(int i = 3; i * i <= n; i+=2){
        if(n % i == 0)can = false;
    }
    if(can) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}