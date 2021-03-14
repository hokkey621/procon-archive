#include <iostream>
#include <string>
using namespace std;


int main(void){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int ans = 0;
    for(int num = 0; num < 1000; num++){
        string str;
        str += num/100 + '0';
        str += (num/10)%10 + '0';
        str += num%10+ '0';
        
        bool check = false;
        for(int i = 0; i < n; i++){
            if(s[i] != str[0])continue;
            for(int j = i + 1; j < n; j++){
                if(s[j] != str[1])continue;
                for(int k = j + 1; k < n; k++){
                    if(s[k] != str[2])continue;
                    check = true;
                    break;
                }
                break;
            }
            break;
        }
        if(check)ans++;
    }
    cout << ans << endl;
    return 0;
}