#include <iostream>
#include <cmath>
using namespace std;


int main(void){
	int n, k;
	cin >> n >> k;
	int ans = k * (int)pow(k - 1, n - 1);
	cout << ans << endl;
	return 0;
}