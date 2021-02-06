#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <iterator>
using namespace std;

int main(void){
	int n,x;
	cin >> n >> x;
	
	vector<int>a(n);
	for(int i = 0; i < n; i++)cin>>a[i];

	int j;
	for(; j < n; j++){
		if(x != a[j]){
			cout<<a[j];
			break;
		}
	}

	//cout<<j<<' '<<a[j]<<endl;
	j++;
	for(; j < n; j++){
		if(x != a[j]){
			cout << ' ' << a[j];
		}
	}
}
