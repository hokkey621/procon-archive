#include <iostream>
#include <string>
using namespace std;

int main(void){
    int n;
    cin >> n;
    int ans = 0;
    for(int i = 1; i <= n; i++){
        string num = to_string(i);
        if(num.size() % 2 == 1) ans++;
    }
    cout << ans << endl;
    return 0;
}