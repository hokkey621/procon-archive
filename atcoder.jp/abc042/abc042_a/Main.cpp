#include <iostream>
using namespace std;

int main(void){
	int cnt5 = 0;
	int cnt7 = 0;
	for(int i = 0; i < 3; i++){
		int x;
		cin >> x;
		if(x == 5)cnt5++;
		if(x == 7)cnt7++;
	}

	if(cnt5 == 2 && cnt7 == 1)cout << "YES" << endl;
	else cout << "NO" <<endl;
	return 0;
}