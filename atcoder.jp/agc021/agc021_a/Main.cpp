#include <iostream>
#include <string>
using namespace std;


int main(void){
    string n;
    cin >> n;
    bool flag = true;
    for(int i = 1; i < n.size(); i++) if(n[i] != '9') flag = false;
    if(flag) cout << 9 * (n.size() - 1) + (n[0] - '0') << endl;
    else cout << 9 * (n.size() - 1) + (n[0] - '0') - 1 << endl;
    return 0;
}