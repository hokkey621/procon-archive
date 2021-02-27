#include <iostream>
#include <vector>
#include <algorithm>
#include <tuple>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)


int main(void){
    int n;
    cin >> n;
    vector<tuple<int, int, int> >data;
    rep(i, n){
        int a, p, x;
        cin >> a >> p >> x;
        data.emplace_back(p, a, x);
    }

    sort(data.begin(), data.end());

    for(auto x : data){
        if(0 < get<2>(x) - get<1>(x)){
            cout << get<0>(x) << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}