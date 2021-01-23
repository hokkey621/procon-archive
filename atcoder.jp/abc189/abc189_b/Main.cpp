#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;

int main(){
  int n;
  ll x;
  cin>>n>>x;

  vector<ll>al(n);
  for(int i=0;i<n;i++){
    int v,p;
    cin>>v>>p;

    al[i]=v*p;
  }

  double r,s,t;
  r = s = 0;  
  for(int i=0;i<n;i++){
    t = s + (al[i] + r);       /* 前回までの総和に f[i] と前回までの積み残しとを加えたものが，今回の結果 */
    r = (al[i] + r) - (t - s); /* 加えるべき値 (f[i] + r) と実際に加わった値 (t - s) との差が，今回の積み残し */
    s = t;
    if(s>x*100){
      cout<<i+1<<endl;
      return 0;
    }
    
  }

  cout<<-1<<endl;
  return 0;
}