#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int main(){
	int n,m;
	cin>>n>>m;
	
	vector<vector<int> >zyouken(m,vector<int>(2));
	for(int i=0;i<m;i++)cin>>zyouken[i][0]>>zyouken[i][1];

	int k;
	cin>>k;
	vector<vector<int> >hito(k,vector<int>(2));
	for(int i=0;i<k;i++)cin>>hito[i][0]>>hito[i][1];


	vector<bool>check(n);

	int ans=-1;

	for(int num=0;num<pow(2,k);num++){
		for(int i=0;i<n;i++){
			check[i]=false;
		}

		int hitoNum=0;
		int tmp=num;
		while (hitoNum<k){
			if(tmp==0){
				check[hito[hitoNum][0]-1]=true;
			}else{
				check[hito[hitoNum][tmp%2]-1]=true;
				tmp/=2;
			}
			hitoNum++;
		}
		
		int cnt=0;
      
		for(int zNum=0;zNum<m;zNum++){
			if(check[zyouken[zNum][0]-1]==true && check[zyouken[zNum][1]-1]==true)cnt++;
			//cout<<zyouken[zNum][0]<<" "<<zyouken[zNum][1]<<endl;
		}

		ans=max(ans,cnt);
		
	}

	cout<<ans<<endl;
	return 0;
}
