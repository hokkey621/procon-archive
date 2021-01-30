#include <iostream>
using namespace std;

int main(){
	int a,b,c;
	cin>>a>>b>>c;

	if(c == 0){
		while(0 <= a || 0 <= b){
			a--;
			if(a <= 0){
				cout<<"Aoki"<<endl;
				return 0;
			}
			b--;
			if(b <= 0){
				cout<<"Takahashi"<<endl;
				return 0;
			}
		}
	}else{
		while(0 <= a || 0 <= b){
			b--;
			if(b <= 0){
				cout<<"Takahashi"<<endl;
				return 0;
			}
			a--;
			if(a <= 0){
				cout<<"Aoki"<<endl;
				return 0;
			}
		}
	}

	return 0;
}