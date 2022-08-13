#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;
#define rep(i, n) for(int i = 0; i < (n); ++i)
const ll MOD = 1000000007;


int main(void) {
    int R, C;
    cin >> R >> C;

    if(R == 1 || R == 15) cout << "black" << endl;
    else if((R == 3 || R == 13) && (C != 2 && C != 14)) cout << "black" << endl;
    else if((R == 5 || R == 11) && (C != 2 && C != 4 && C != 12 && C != 14)) cout << "black" << endl;
    else if((R == 7 || R == 9) && (C != 2 && C != 4 && C!= 6 && C!= 10 && C != 12 && C != 14)) cout << "black" << endl;
    else if(R == 8 && (C != 2 && C != 4 && C!= 6 && C!= 8 && C!= 10 && C != 12 && C != 14)) cout << "black" << endl;

    else if(C == 1 || C == 15) cout << "black" << endl;
    else if((C == 3 || C == 13) && (R != 2 && R != 14)) cout << "black" << endl;
    else if((C == 5 || C == 11) && (R != 2 && R != 4 && R != 12 && R != 14)) cout << "black" << endl;
    else if((C == 7 || C == 9) && (R != 2 && R != 4 && R!= 6 && R!= 10 && R != 12 && R != 14)) cout << "black" << endl;
    else if(C == 8 && (R != 2 && R != 4 && R!= 6 && R!= 8 && R!= 10 && R != 12 && R != 14)) cout << "black" << endl;
    else cout << "white" << endl;

}