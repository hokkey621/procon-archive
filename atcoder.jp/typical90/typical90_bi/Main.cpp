#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)


int main(void) {
    int q;
    cin >> q;
    int array[200000];
    int pl, pr;
    pl = pr = 100000;

    rep(i, q) {
        int t, x;
        cin >> t >> x;
        switch (t){
        case 1:
            array[pl--] = x;
            break;
        case 2:
            array[++pr] = x;
            break;
        case 3:
            cout << array[pl+x] << endl;
            break;
        default:
            break;
        }
    }
    return 0;
}