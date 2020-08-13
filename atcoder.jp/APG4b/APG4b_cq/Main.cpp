#include<iostream>

int main(){
  using namespace std;
  int a,b;
  string op;
  
  cin>>a>>op>>b;
  
  if(op=="+"){
    cout<<a+b<<'\n';
  }else if(op=="-"){
    cout<<a-b<<'\n';
  }else if(op=="*"){
    cout<<a*b<<'\n';
  }else if(op=="/"){
    if(b!=0){
      cout<<a/b<<'\n';
    }else{
  cout<<"error\n";
    }
  }else{
    cout<<"error\n";
  }
return 0;
}
