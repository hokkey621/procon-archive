#include <iostream>
#include <string>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)

int main(void){
	char num[4];
	cin >> num;

	int n = 1 << 3;
	rep(i, n){
		int ans = (num[0] - '0');
		string ans_str;
		ans_str = num[0];
		rep(j, 3){
			if((i >> j) & 1){
				ans += (num[j + 1] - '0');
				ans_str += '+';
			}else{
				ans -= (num[j + 1] - '0');
				ans_str += '-';
			}
			ans_str += num[j + 1];
		}
		if(ans == 7){
			ans_str += "=7";
			cout << ans_str << endl;
			break;
		}
	}
	return 0;
}