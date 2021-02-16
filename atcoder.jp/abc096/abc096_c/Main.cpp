#include <iostream>
#include <string>
#include <vector>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)

int main(void){
	int h, w;
	cin >> h >> w;
	vector<string>s(h + 2);
	rep(i, h + 2){
		s[i] = ".";
	}

	rep(i, w + 1){
		s[0].push_back('.');
		s[h + 1].push_back('.');
	}

	for(int i = 1; i < h + 1; i++){
		string tmp;
		cin >> tmp;
		s[i] += tmp;
		s[i].push_back('.');
	}

	for(int i = 1; i < h + 1; i++){
		for(int j = 1; j < w + 1; j++){
			if(s[i][j] != '#')continue;

			bool check = false;
			if(s[i - 1][j] == '#')check = true;
			if(s[i + 1][j] == '#')check = true;
			if(s[i][j - 1] == '#')check = true;
			if(s[i][j + 1] == '#')check = true;
			if(!check){
				cout << "No" << endl;
				return 0;
			}
		}
	}

	cout << "Yes" << endl;
	return 0;
}