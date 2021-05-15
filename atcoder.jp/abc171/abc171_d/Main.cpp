#include <iostream>
#include <vector>
using namespace std;
using ll = long long;
#define rep(i, n) for(int i = 0; i < (n); i++)


int main(void){
    int n;
    cin >> n;
    vector<ll> num(n);
    ll sum = 0;
    ll cnt[100001] = {0};
    rep(i, n) {
        cin >> num[i];
        sum += num[i];
        cnt[num[i]]++;
    }
    int q;
    cin >> q;
    rep(i, q){
        int b, c;
        cin >> b >> c;
        sum = sum + (c - b) * cnt[b];
        cout << sum << endl;
        cnt[c] += cnt[b];
        cnt[b] = 0;
    }
    return 0;
}