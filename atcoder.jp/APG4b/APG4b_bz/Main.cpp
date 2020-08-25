#include<iostream>
#include<vector>
#include<map>

int main(){
  using namespace std;
  int N;
  cin>>N;
  
  vector<int>a(N);
    
  for(int i=0;i<N;i++){
    cin>>a.at(i);
  }
  
  map<int,int>cnt;
  for(int x:a){
    if(cnt.count(x)){
      cnt.at(x)++;
    }else{
      cnt[x]=1;
    }
  }
    
    int max=0,ans=-1;
    
    for(int x:a){
      if(max<cnt.at(x)){
        max=cnt.at(x);
        ans=x;
      }
    }
  
	cout<<ans<<' '<<max<<endl;
    return 0;
  
}