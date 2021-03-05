#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)

int main(void){
	int n;
	int t[110000], x[110000], y[110000];
    cin >> n;
    t[0] = x[0] = y[0] = 0;
	rep(i, n)cin >> t[i + 1] >> x[i + 1] >> y[i + 1];

    bool flag = true;
	rep(i, n){
		int dt = t[i + 1] - t[i];
		int dist = abs(x[i + 1] - x[i]) + abs(y[i + 1] - y[i]);
        if(dt < dist)flag = false;
        if(dist % 2 != dt % 2)flag = false;
	}
	if(flag)cout << "Yes" << endl;
    else cout << "No" << endl;
	return 0;
}