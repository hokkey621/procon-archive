#include <iostream>
using namespace std;

int main(void){
	int a, b, c, x, y;
	cin >> a >> b >> c >> x >> y;

	int ans = 1e9;
	
	for(int i = 0; i <= max(2 * x, 2 * y); i++){
		int j = 0;
		int k = 0;
		if(x > i / 2)j = x - i / 2;
		if(y > i / 2)k = y - i / 2;

		int tmp = a * j + b * k + c * i;
		ans = min(ans, tmp);
	}

	cout << ans << endl;
	return 0;
}