#include <iostream>
using namespace std;


int main(void){
	int x;
	cin >> x;

	cout << 100 - (x % 100) << endl;
	return 0;
}