#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)


int main(void) {
    int n;
    cin >> n;
    vector<int> num(n);
    rep(i, n) {
        int p;
        cin >> p;
        num[p-1] = i + 1;
    }

    rep(i, n) {
        cout << num[i] << endl;
    }
    return 0;
}