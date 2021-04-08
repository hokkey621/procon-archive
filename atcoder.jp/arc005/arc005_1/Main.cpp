#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); i++)


int main(void){
    int n;
    cin >> n;
    vector<string> w(n);
    rep(i, n) cin >> w[i];
    w[n - 1].pop_back();
    string check[3] = {"TAKAHASHIKUN", "Takahashikun", "takahashikun"};
    int cnt = 0;
    rep(i, 3){
        rep(j, n){
            if(w[j] == check[i]) cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}