#include <iostream>
#include <vector>
using namespace std;


int main(void){
	int n;
	cin >> n;
	vector<int>a(n);
	for(int i = 0; i < n; i++)cin >> a[i];

	int cnt = 1;
	for(int i = 0; i < n - 1;){
		if(a[i] < a[i + 1]){
			while(i < n - 1){
				if(a[i] > a[i + 1]){
					cnt++;
					break;
				}
				i++;
			}
		}else if(a[i] > a[i + 1]){
			while(i < n - 1){
				if(a[i] < a[i + 1]){
					cnt++;
					break;
				}
				i++;
			}
		}
		i++;
	}
	cout << cnt << endl;
	return 0;
}