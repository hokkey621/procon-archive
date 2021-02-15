#include <iostream>
using namespace std;

int main(void){
	int n, a, b;
	cin >> n >> a >> b;

	if((b - a - 1) % 2 == 0)cout << "Borys" << endl;
	else cout << "Alice" << endl;
	return 0;
}