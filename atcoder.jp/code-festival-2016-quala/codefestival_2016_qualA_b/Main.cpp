#include <iostream>
#include <vector>
using namespace std;



int main(void){
    int n;
    cin >> n;
    vector<int> a(n + 1);
    for(int i = 1; i <= n; i++){
        int x;
        cin >> x;
        a[i] = x;
    }
    int ans = 0;
    for(int i = 1; i <= n; i++){
        if(a[a[i]] == i) ans++;
    }
    cout << ans / 2 << endl;
    return 0;
}