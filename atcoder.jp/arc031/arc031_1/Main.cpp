#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)


int main(void){
	string s;
	cin >> s;
	int size = s.size();
	rep(i, size){
		int j = size - i - 1;
		if(j < i)break;
		if(s[i] != s[j]){
			cout << "NO" << endl;
			return 0;
		}
	}
	cout << "YES" << endl;
	return 0;
}