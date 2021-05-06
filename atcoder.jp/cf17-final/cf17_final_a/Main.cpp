#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


int main(void){
    string s;
    cin >> s;
    bool can = false;
    if(s == "AKIHABARA") can = true;
    else if(s == "AKIHABAR") can = true;
    else if(s == "AKIHABRA") can = true;
    else if(s == "AKIHABR") can = true;
    else if(s == "AKIHBARA") can = true;
    else if(s == "AKIHBAR") can = true;
    else if(s == "AKIHBRA") can = true;
    else if(s == "AKIHBR") can = true;
    else if(s == "KIHABARA") can = true;
    else if(s == "KIHABAR") can = true;
    else if(s == "KIHABRA") can = true;
    else if(s == "KIHABR") can = true;
    else if(s == "KIHBARA") can = true;
    else if(s == "KIHBAR") can = true;
    else if(s == "KIHBRA") can = true;
    else if(s == "KIHBR") can = true;

    if(can) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}