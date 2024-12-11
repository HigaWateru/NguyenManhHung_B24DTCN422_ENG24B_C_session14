#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
int count;
int main(){
    char s[1005];
    gets(s);
    if(strlen(s)==0)printf("0");
    else for(int i=0;i<strlen(s);i++)if(s[i]==' ')count++;
    printf("%d",count+1);
}
