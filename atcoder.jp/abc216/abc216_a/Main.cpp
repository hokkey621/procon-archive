#include <iostream>
#include <string>
using namespace std;



int main(void) {
    double s;
    cin >> s;
    int x = (int)s;
    int y = (s - x) * 10;
    if(0 <= y && y <= 2) cout << x << '-' << endl;
    else if(3 <= y && y <= 6) cout << x << endl;
    else cout << x << '+' << endl;
    return 0;
}