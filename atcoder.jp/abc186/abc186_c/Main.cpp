#include <iostream>
using namespace std;

int main(){
	int n;
	cin  >> n;
	
	int cnt = 0;

	for(int i = 1; i <= n; i++){
		bool check = true;
		int j = i, k = i;
		while (j > 0){
			if(j % 10 == 7)check = false;

			j /= 10;
		}
		while (k > 0){
			if(k % 8 == 7)check = false;

			k /= 8;
		}
		
		if(check)cnt++;
		
	}
	cout << cnt << endl;
	return 0;
}