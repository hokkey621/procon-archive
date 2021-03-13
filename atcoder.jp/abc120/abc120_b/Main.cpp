#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)


int main(void){
    int a, b, k;
    cin >> a >> b >> k;
    int num = min(a, b);
    while(0 < num){
        if(a % num == 0 && b % num == 0){
            k--;
        }
        if(k == 0)break;
        num--;
    }
    cout << num << endl;
    return 0;
}