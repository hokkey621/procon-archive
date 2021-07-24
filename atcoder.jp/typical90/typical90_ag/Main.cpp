#include <iostream>
using namespace std;


int main(void) {
    int h, w;
    cin >> h >> w;
    if(h == 1 || w == 1) {
        cout << h * w << endl;
    } else {
        cout << ((h + 1) / 2) * ((w + 1) / 2) << endl;
    }
    return 0;
}