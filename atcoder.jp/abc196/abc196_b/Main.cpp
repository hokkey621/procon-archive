#include <iostream>
#include <string>
using namespace std;


int main(void){
    string x;
    cin >> x;
    for(int i = 0; i < x.size(); i++){
        if(x[i] == '.')break;
        cout << x[i];
    }
    cout << '\n';
    return 0;
}