#include <iostream>
using namespace std;


int main(void){
    int x, y;
    cin >> x >> y;
    if(y % 2 != 0){
        cout << "No" << endl;
        return 0;
    }
    if(2 * x <= y && y <= 4 * x) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}