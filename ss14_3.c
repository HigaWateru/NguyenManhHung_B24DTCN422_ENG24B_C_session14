#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
int main(){
    char s[10005];
    gets(s);
    for(int i=strlen(s)-1;i>=0;i--)printf("%c",s[i]);
}
