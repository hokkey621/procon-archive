#include <iostream>
#include <string>
#include <vector>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)


int func(string str){
    vector<int> num(10, 0);
    rep(i, 5)num[str[i] - '0']++;
    int res = 0;
    for(int i = 1; i <= 9; i++){
        int x = 1;
        rep(j, num[i])x *= 10;
        res += x * i;
    }
    return res;
}


int main(void){
    int k;
    cin >> k;
    string s, t;
    cin >> s >> t;
    vector<int> c(10, k);
    c[0] = 0;
    rep(i, 4)c[s[i] - '0']--;
    rep(i, 4)c[t[i] - '0']--;

    ll cnt = 0;
    for(int i = 1; i <= 9; i++){
        for(int j = 1; j <= 9; j++){
            s[4] = i + '0';
            t[4] = j + '0';
            if(func(s) > func(t)){
                if(i == j) cnt += (ll)c[i] * (c[i] - 1);
                else cnt += (ll)c[i] * c[j];
            }
        }
    }

    ll x = 0;
    rep(i, 10) x += c[i];
    ll total = x * (x - 1);
    double ans = (double)cnt / total;
    printf("%.10f\n", ans);
    return 0;
}