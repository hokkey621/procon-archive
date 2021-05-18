#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main(void){
    string a, b;
    cin >> a >> b;
    vector<int> fixedA(3);
    rep(i, 3){
        string tmp = a;
        tmp[i] = '9';
        fixedA[i] = stoi(tmp) - stoi(b);
    }
    sort(fixedA.begin(), fixedA.end(), greater<int>());
    vector<int> fixedB(3);
    rep(i, 3){
        string tmp = b;
        if(i == 0) tmp[i] = '1';
        else tmp[i] = '0';
        fixedB[i] = stoi(a) - stoi(tmp);
    }
    sort(fixedB.begin(), fixedB.end(), greater<int>());
    cout << max(fixedA[0], fixedB[0]) << endl;
    return 0;
}