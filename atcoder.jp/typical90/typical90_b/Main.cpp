#include <iostream>
using namespace std;


int main(void) {
    //入力
    int N;
    cin >> N;

    //処理と出力
    for(int bit = 0; bit < (1<<N); ++bit) {
        int cnt0, cnt1;
        cnt0 = cnt1 = 0;
        bool check = true; //条件を満たすかのチェック

        for(int i = N - 1; 0 <= i; --i) {
            if(bit & (1<<i)) ++cnt1;
            else ++cnt0;
            if(cnt0 < cnt1) check = false;
        }
        if(cnt0 != cnt1) check = false;

        if(check) {
            for(int i = N - 1; 0 <= i; --i) {
                if(bit & (1<<i)) cout << ')';
                else cout << '(';
            }
            cout << '\n';
        }
    }

    return 0;
}