#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;
#define rep(i, n) for(int i = 0; i < (n); ++i)
const ll MOD = 1000000007;


int main(void) {
    //入力
    char p, q;
    cin >> p >> q;
    int a = p - 'A';
    int b = q - 'A';

    if(a > b) swap(a, b);


    int dist[7] = {0, 3, 4, 8, 9, 14, 23};

    cout << dist[b] - dist[a] << endl;

    return 0;
}