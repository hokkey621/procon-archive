#include <iostream>
#include <tuple>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); i++)


int main(void){
    int n;
    cin >> n;
    vector<tuple<string, int, int> > data(n);
    rep(i, n){
        string s;
        int p;
        cin >> s >> p;
        data[i] = make_tuple(s, -p, i + 1);
    }
    sort(data.begin(), data.end());
    for(auto x:data) cout << get<2>(x) << endl;
    return 0;
}