#include <iostream>
#include <string>
using namespace std;


int main(void){
	string s;
	cin >> s;
	
	bool check = true;
	for(int i = 0; i < s.size(); i++){
		if(i % 2 == 0){
			if(s[i] < 'a' || 'z' < s[i])check = false;
		}else{
			if(s[i] < 'A' || 'Z' < s[i])check = false;
		}
	}

	if(check)cout << "Yes" << endl;
	else cout << "No" << endl;
	return 0;
}