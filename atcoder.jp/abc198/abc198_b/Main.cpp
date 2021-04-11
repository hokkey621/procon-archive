#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


int main(void){
    string n;
    cin >> n;
    while(n[n.size()-1] == '0') n.pop_back();
    string tmp = n;
    reverse(tmp.begin(), tmp.end());
    if(n == tmp)cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}