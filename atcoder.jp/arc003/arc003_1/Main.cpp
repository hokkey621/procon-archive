#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); i++)



int main(void){
    int n;
    cin >> n;
    double sum = 0;
    rep(i, n){
        char r;
        cin >> r;
        if(r == 'A') sum += 4.0;
        else if(r == 'B') sum += 3.0;
        else if(r == 'C') sum += 2.0;
        else if(r == 'D') sum += 1.0;
    }
    printf("%.14lf\n", sum / n);
    return 0;
}