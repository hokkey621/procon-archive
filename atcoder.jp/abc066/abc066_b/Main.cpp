#include <iostream>
#include <string>
using namespace std;


int main(void){
    string s;
    cin >> s;
    int size = s.size();
    if(size % 2 == 0) size -= 2;
    else size--;
    while(1 < size){
        if(s.substr(0, size/2) == s.substr(size/2, size/2))break;
        size -= 2;
    }

    if(size == 0) cout << 1 << endl;
    else cout << size << endl;
    return 0;
}