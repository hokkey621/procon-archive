#include <iostream>
using namespace std;


int main(void){
    int n = 20;
    int a[20] = {0};
    a[0] = 100;
    a[1] = 100;
    a[2] = 200;
    for(int i = 3; i < n; i++){
        a[i] = a[i - 1] + a[i - 2] + a[i - 3];
    }
    cout << a[n - 1] << endl;
    return 0;
}