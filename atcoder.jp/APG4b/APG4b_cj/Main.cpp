#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  
  int *a;
  int i,ave,sum=0;
  a=new int[N];
  //入力
  for(i=0;i<N;i++){
    cin>>a[i];
  }
  //計算
  for(i=0;i<N;i++){
    sum+=a[i];
  }
  ave=sum/N;
  for(i=0;i<N;i++){
    a[i]=fabs(a[i]-ave);
  }
  //出力
  for(i=0;i<N;i++){
  cout<<a[i]<<endl;
  }
  delete[] a;
  return 0;
}
