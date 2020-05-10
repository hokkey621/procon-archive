#include <stdio.h>

int main(void){
 int a,b,c,k,x;
 scanf("%d %d %d %d",&a,&b,&c,&k);
 x=k-a;
 if(x<=0){
   printf("%d",k);
 }else if(b>=x){
     printf("%d",a);
 }else{
   printf("%d",2*a+b-k);
 }
  return 0;
}