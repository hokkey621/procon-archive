#include <iostream>
#include <vector>
using namespace std;

int main(){
	int n,s,d;
	cin>>n>>s>>d;

	vector<vector<int>>data(n,vector<int>(2));
	for(int i=0;i<n;i++){
		for(int j=0;j<2;j++){
			cin>>data[i][j];
		}
	}

	for(int i=0;i<n;i++){
		if(data[i][0]<s){
			if(data[i][1]>d){
				cout<<"Yes"<<endl;
				return 0;
			}
		}
	}

	cout<<"No"<<endl;
	return 0;
}