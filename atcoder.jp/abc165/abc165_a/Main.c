# include <stdio.h>
int main(void){
    int k,a,b,i;
    scanf("%d",&k);
    scanf("%d %d",&a,&b);
    for(i=0;i<1000;i++){
        if(i*k>b){
            printf("NG");
            return 0;
        }else if(i*k>=a && i*k<=b){
            printf("OK");
            return 0;
        }
    }
}
