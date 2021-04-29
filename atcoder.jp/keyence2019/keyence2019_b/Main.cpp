#include <iostream>
#include <string>
using namespace std;


int main(void){
    string s;
    cin >> s;
    string check = "keyence";
    if(s == check) {
        cout << "YES" << endl;
        return 0;
    }
    int n = s.size();
    for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++){
            string tmp = "";
            for(int k = 0; k < n; k++){
                if(i <= k && k <= j)continue;
                else tmp.push_back(s[k]);
            }
            //cout << tmp << endl;
            if(tmp == check) {
                cout << "YES" << endl;
                return 0;
            }
        }
    }
    cout << "NO" << endl;
    return 0;
}