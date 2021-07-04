#include <iostream>
using namespace std;


int main(void) {
    int a, b;
    cin >> a >> b;
    if(a <= b && b <= 6 * a) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}