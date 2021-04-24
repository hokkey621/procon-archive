#include <iostream>
#include <string>
#include <vector>
using namespace std;
using ll = long long;


int main(void){
    string s;
    cin >> s;
    ll sum = 0;
    int n = s.size();
    vector<ll> ans(n + 1, 0);
    for(int i = 0; i < n; i++){
        if(s[i] == '<') ans[i + 1] = max(ans[i] + 1, ans[i + 1]);
    }
    for(int i = n - 1; 0 <= i; i--){
        if(s[i] == '>') ans[i] = max(ans[i], ans[i + 1] + 1);
    }
    for(int i = 0; i <= n; i++) sum += ans[i];
    cout << sum << endl;
    return 0;
}