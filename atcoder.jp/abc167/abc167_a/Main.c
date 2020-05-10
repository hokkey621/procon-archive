#include <stdio.h>
#include <string.h>

int main(void){
  int i,len1,len2;
    
  char str1[256];
  char str2[256];
  scanf("%s",str1);
  scanf("%s",str2);
  
  len1=strlen(str1);
  len2=strlen(str2);
  
  for(i=0;i<len1;i++){
    if(str1[i]!=str2[i])break;
  }
  if(i==len2-1){
    printf("Yes");
  }else{
    printf("No");
  }
  return 0;
}
