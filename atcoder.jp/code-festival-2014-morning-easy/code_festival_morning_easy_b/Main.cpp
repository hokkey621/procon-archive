#include <iostream>
using namespace std;


int main(void){
    int n;
    cin >> n;
    
    int div = n / 20;
    if(n % 20 == 0) div--;
    
    int num = n % 20;
    if(num == 0) num = 20;

    if(div % 2 == 0) cout << num << endl;
    else cout << 21 - num << endl;
    return 0;
}