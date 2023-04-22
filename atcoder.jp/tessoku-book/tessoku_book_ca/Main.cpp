#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;
#define rep(i, n) for(int i = 0; i < (n); ++i)
const ll MOD = 1000000007;


int main(void) {
    int A, B;
    cin >> A >> B;

    for(int i = A; i <= B; ++i) {
        if(100 % i == 0) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    
    cout << "No"  << endl;
    return 0;
}