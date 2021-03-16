#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); i++)


int main(void){
    int n;
    cin >> n;
    vector<int>p(n);
    vector<int>q(n);
    rep(i, n)cin >> p[i];
    rep(i, n)cin >> q[i];
    vector<int>vec(n);
    rep(i, n) vec[i] = i + 1;

    int num = 0;
    int a, b;
    do{
        if(vec == p) a = num;
        if(vec == q) b = num;
        num++;
    }while(next_permutation(vec.begin(), vec.end()));
    cout << abs(a - b) << endl;
    return 0;
}