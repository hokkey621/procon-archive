#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)


int main(void){
	int n, m;
	cin >> n >> m;
	vector<vector<bool> >data(n, vector<bool>(n, false));
	
	rep(i, m){
		int x, y;
		cin >> x >> y;
		data[x - 1][y - 1] = data[y - 1][x - 1] = true;
	}
	
	int num = 1 << n;
	int ans = -1;
	for(int i = 1; i < num; i++){
		vector<int>tmp;
		rep(j, n){
			if((i >> j) & 1)tmp.push_back(j);
		}

		bool check = true;
		int size = tmp.size();
		rep(p, size){
			for(int q = p + 1; q < size; q++){
				if(data[tmp[p]][tmp[q]] == false || data[tmp[q]][tmp[p]] == false)check = false;
			}
		}

		if(check){
			ans = max(ans, size);
		}
	}
	cout << ans << endl;
	return 0;
}