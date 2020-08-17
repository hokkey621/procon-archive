#include <bits/stdc++.h>
using namespace std;

void calcurate(char op,int b,int *A){
  if(op=='+'){
    *A=*A+b;
  }else if(op=='-'){
    *A=*A-b;
  }else if(op=='*'){
    *A=(*A)*b;
  }else{
    if(b!=0){
      *A=*A/b;
    }else{
      cout<<"error\n";
      exit(0);
    }
  }
}

int main() {
  int N, A;
  cin >> N >> A;

  char *op;
  int *b;
  
  op=new char[N];
  b=new int[N];
  //入力
  int i;
  for(i=0;i<N;i++){
    cin>>op[i]>>b[i];
  }
  //出力
  for(i=0;i<N;i++){
    calcurate(op[i],b[i],&A);
    cout<<i+1<<':'<<A<<endl;
  }
  
  delete[] op;
  delete[] b;
  return 0;
}
