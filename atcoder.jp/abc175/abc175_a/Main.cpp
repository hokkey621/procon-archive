#include <iostream>
#include <string>
using namespace std;

int main(){
  string s;
  cin>>s;
  
  int ans = 0;
  if(s[0] == 'R'){
		if(s[1] == 'R'){
			if(s[2] == 'R'){
				ans = 3;
			}else{
				ans = 2;
			}
		}else{
			ans = 1;
		}
	}else{
		if(s[1] == 'R'){
			if(s[2] == 'R'){
				ans = 2;
			}else{
				ans = 1;
			}
		}else{
			if(s[2] == 'R'){
				ans = 1;
			}
		}
	}
  
	cout<<ans<<endl;
	return 0;
}