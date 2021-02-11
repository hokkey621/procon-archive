#include <iostream>
#include <vector>
using namespace std;

int main(void){
	int c[3][3];
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			cin >> c[i][j];
		}
	}

	int a[3];
	int b[3];

	a[0] = 0;
	for(int i = 0; i < 3; i++){
		b[i] = c[0][i];
	}
	for(int i = 1; i < 3; i++){
		a[i] = c[i][0] - b[0];
	}

	bool flag = true;
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			if(a[i] + b[j] != c[i][j])flag = false;
		}
	}

	if(flag)cout << "Yes" << endl;
	else cout << "No" <<endl;
	return 0;
}