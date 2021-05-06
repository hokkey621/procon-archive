#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); i++)


int main(void){
    int num[5];
    rep(i, 5) cin >> num[i];
    vector <int> ans;
    rep(i, 5){
        for(int j = i + 1; j < 5; j++){
            for(int k = j + 1; k < 5; k++){
                ans.push_back(num[i] + num[j] + num[k]);
            }
        }
    }
    sort(ans.begin(), ans.end(), greater<int>());
    cout << ans[2] << endl;
    return 0;
}