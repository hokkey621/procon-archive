#include <stdio.h>

int main(void)
{
    char buf[100];
    fgets(buf, sizeof(buf), stdin);

    
    char str[10];
    sscanf(buf, "%s", str);
    if(!strcmp(str,"ABC")){
        printf("ARC");
    }else{
        printf("ABC");
    }
}
