#include <iostream>
#include <string>
using namespace std;
using ll = unsigned long long;


int main(void) {
    ll n;
    cin >> n;

    string ans = "";
    while(0 < n) {
        if(n % 2 == 0) {
            n /= 2;
            ans = "B" + ans;
        } else {
            --n;
            ans = "A" + ans;
        }
    }
    cout << ans << endl;
}