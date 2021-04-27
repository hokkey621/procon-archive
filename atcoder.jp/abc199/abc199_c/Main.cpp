#include <iostream>
#include <string>

using namespace std;
#define rep(i, n) for(int i = 0; i < (n); i++)


int main(void){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int q;
    cin >> q;
    int flag = 1;
    rep(i, q){
        int t, a, b;
        cin >> t >> a >> b;
        a--;
        b--;
        if(t == 1){
            if(flag == -1){
                if(a < n) a += n;
                else if(a >= n) a -= n;
                if(b < n) b += n;
                else if(b >= n) b -= n;
            }
            swap(s[a], s[b]);
        }else{
            flag *= -1;
        }
    }
    
    if(flag == -1){
        rep(i, n){
            swap(s[i], s[i + n]);
        }
    }
    
    cout << s << endl;
    return 0;
}