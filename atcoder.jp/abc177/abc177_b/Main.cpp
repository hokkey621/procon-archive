#include <iostream>
#include <string>
using namespace std;


int main(void){
    string s, t;
    cin >> s >> t;
    int numS = s.size(), numT = t.size();
    int ans = numT;
    for(int i = 0; i <= numS - numT; i++){
        int cnt = 0;
        for(int j = 0; j < numT; j++){
            if(s[i + j] != t[j])cnt++;
        }
        ans = min(ans, cnt);
    }
    cout << ans << endl;
    return 0;
}