#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
  int N;
  int a,b;
  cin>>N;
  
    vector<pair<int,int>>num(N);
    
    for(int i=0;i<N;i++){
        cin>>a>>b;
        num.at(i)=make_pair(b, a);
    }
    
    sort(num.begin(),num.end());
    
    for(int i=0;i<N;i++){
        tie(b,a)=num.at(i);
        cout<<a<<' '<<b<<endl;
    }
  
    
    
    return 0;
}
