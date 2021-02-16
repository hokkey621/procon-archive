#include <iostream>
#include <string>
#include <vector>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for(int i = (s); i < (int)(n); i++)


int main(void){
	int h, w;
	cin >> h >> w;
	vector<string>s(h + 2);
	rep(i, w + 2)s[0].push_back('.');
	rep(i, w + 2)s[h + 1].push_back('.');

	rep2(i, 1, h + 1)cin >> s[i];
	rep2(i, 1, h + 1){
		s[i].insert(s[i].begin(), '.');
		s[i].push_back('.');
	}

	for(int i = 1; i < h + 1; i ++){
		for(int j = 1; j < w + 1; j++){
			int cnt = 0;
			if(s[i][j] == '#'){
				cout << '#';
			}else{
				if(s[i - 1][j - 1] == '#')cnt++;
				if(s[i - 1][j] == '#')cnt++;
				if(s[i - 1][j + 1] == '#')cnt++;

				if(s[i][j - 1] == '#')cnt++;
				if(s[i][j + 1] == '#')cnt++;

				if(s[i + 1][j - 1] == '#')cnt++;
				if(s[i + 1][j] == '#')cnt++;
				if(s[i + 1][j + 1] == '#')cnt++;

				cout << cnt;
			}
		}
		cout << '\n';
	}

	return 0;
}