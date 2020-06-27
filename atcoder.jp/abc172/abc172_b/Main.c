#include<stdio.h>
#include<string.h>
int main(void){
  int i,len,count=0;
  char str1[210000];
  char str2[210000];
  
  scanf("%s",str1);
  scanf("%s",str2);
  
  len=strlen(str1);
  
  for(i=0;i<len;i++){
    if(str1[i]!=str2[i]){
      count++;
    }
  }
  printf("%d",count);
  return 0;
}