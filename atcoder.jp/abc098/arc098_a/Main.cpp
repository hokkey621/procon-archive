#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;


int main(void){
	int n;
	cin >> n;
	string s;
	cin >> s;

	vector<int>sumE(n + 1, 0);
	vector<int>sumW(n + 1, 0);
	for(int i = 1; i < n + 1; i++){
		if(s[i - 1] == 'E'){
			sumE[i] = sumE[i - 1] + 1;
			sumW[i] = sumW[i - 1];
		}else{
			sumE[i] = sumE[i - 1];
			sumW[i] = sumW[i - 1] + 1;
		}
	}

	int ans = 1000000;
	for(int i = 0; i < n; i++){
		int tmp = sumW[i] + (sumE[n] - sumE[i + 1]);
		ans = min(ans, tmp);
	}

	cout << ans << endl;
	return 0;
}