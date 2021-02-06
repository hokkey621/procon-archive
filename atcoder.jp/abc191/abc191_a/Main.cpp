#include <iostream>
using namespace std;

int main(void){
	double v,t,s,d;
	cin >> v >> t >> s >> d;

	if(s < (d/v) || (d/v) < t)cout<<"Yes"<<endl;
	else cout<<"No"<<endl;

	return 0;
}