#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)


int main(void){
    int t, n;
    cin >> t >> n;
    vector<int>a(n);
    rep(i, n)cin >> a[i];
    int m;
    cin >> m;
    vector<int>b(m);
    rep(i, m)cin >> b[i];
    vector<bool>check(m, false);

    int tako = 0;
    rep(i, m){
        while(b[i] < a[tako] || a[tako] + t < b[i]){
            tako++;
            if(n <= tako){
                cout << "no" << endl;
                return 0;
            }
        }
        if(a[tako] <= b[i] && b[i] <= a[tako] + t){
            check[i] = true;
            tako++;
        }
        if(n <= tako)break;
    }
    rep(i, m){
        if(check[i] == true)continue;

        cout << "no" << endl;
        return 0;
    }
    cout << "yes" << endl;
    return 0;
}