#include <iostream>
#include <vector>
using namespace std;


void func1(int x, int h, vector<vector<int> >& box){
	for(int i = 0; i < h; i++){
		for(int j = 0; j < x; j++){
			box[i][j] = 1;
		}
	}
}


void func2(int x, int h, int w, vector<vector<int> >& box){
	for(int i = 0; i < h; i++){
		for(int j = x; j < w; j++){
			box[i][j] = 1;
		}
	}
}


void func3(int y, int w, vector<vector<int> >& box){
	for(int i = 0; i < y; i++){
		for(int j = 0; j < w; j++){
			box[i][j] = 1;
		}
	}
}


void func4(int y, int h, int w, vector<vector<int> >& box){
	for(int i = y; i < h; i++){
		for(int j = 0; j < w; j++){
			box[i][j] = 1;
		}
	}
}

int main(void){
	int w, h, n;
	cin >> w >> h >>n;

	vector<vector<int> >box(h, vector<int>(w));

	for(int i = 0; i < n; i++){
		int x, y, a;
		cin >> x >> y >> a;
		switch (a)
		{
		case 1:
			func1(x, h, box);
			break;
		case 2:
			func2(x, h, w, box);
			break;
		case 3:
			func3(y, w, box);
			break;
		case 4:
			func4(y, h, w, box);
			break;
		default:
			break;
		}
	}

	int cnt = 0;
	for(int i = 0; i < h; i++){
		for(int j = 0; j < w; j++){
			if(box[i][j] == 0)cnt++;
		}
	}

	cout << cnt << endl;
	return 0;
}