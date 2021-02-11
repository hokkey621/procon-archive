#include <vector>
#include <iostream>
#include <cmath>
using namespace std;

int main(void){
	int n;
	cin >> n;
	vector<int>x(n);
	vector<int>y(n);
	vector<int>h(n);
	for(int i = 0; i < n; i++)cin >> x[i] >> y[i] >> h[i];
	
	
	int cx, cy, H;
	for(cx = 0; cx <= 100 ; cx++){
		for(cy = 0; cy <= 100; cy++){
			int i = 0;
			while(h[i] < 1)i++;
			
			H = h[i] + abs(x[i] - cx) + abs(y[i] - cy);
			
			bool flag = true;
			for(int j = 0; j < n; j++){
				if(h[j] != max(H - abs(x[j] - cx) - abs(y[j] - cy), 0)){
					flag = false;
					break;
				}
			}
			
			if(flag){
				cout << cx << ' ' << cy << ' ' << H << endl;
				return 0;
			}
		}
	}
	return 0;
}