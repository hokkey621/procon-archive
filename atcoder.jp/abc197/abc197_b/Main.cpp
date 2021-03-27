#include <iostream>
#include <string>
#include <vector>
using namespace std;


int main(void){
    int h, w, x, y;
    cin >> h >> w >> x >> y;
    vector<string>s(h);
    for(int i = 0; i < h; i++) cin >> s[i];
    int cnt = 0;
    for(int i = y; i < w; i++){
        if(s[x-1][i] == '.') cnt++;
        else break;
    }
    for(int i = y - 2; 0 <= i; i--){
        if(s[x-1][i] == '.') cnt++;
        else break;
    }
    for(int i = x; i < h; i++){
        if(s[i][y-1] == '.') cnt++;
        else break;
    }
    for(int i = x - 2; 0 <= i; i--){
        if(s[i][y-1] == '.') cnt++;
        else break;
    }
    cnt++;
    cout << cnt << endl;
    return 0;
}