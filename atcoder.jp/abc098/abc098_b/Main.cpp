#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); i++)


int main(void){
    int n;
    cin >> n;
    string s;
    cin >> s;

    int ans = 0;
    for(int i = 1; i < n; i++){
        int cnt = 0;
        for(auto c = 'a'; c <= 'z'; c++){
            bool x = false, y = false;
            rep(j, i) if(s[j] == c) x = true;
            for(int k = i; k < n; k++) if(s[k] == c) y = true;
            if(x && y) cnt++;
        }
        ans = max(ans, cnt);
    }
    cout << ans << endl;
    return 0;
}