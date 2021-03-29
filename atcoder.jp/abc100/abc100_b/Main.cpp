#include <iostream>
using namespace std;


int main(void){
    int d, n;
    cin >> d >> n;
    for(int num = 1; num < 1100000; num++){
        int cnt = 0;
        int x = num;
        while(0 < x){
            if(x % 100 == 0) cnt++;
            else break;
            x /= 100;
        }
        if(cnt == d) n--;
        if(n == 0){
            cout << num << endl;
            break;
        }
    }
    return 0;
}