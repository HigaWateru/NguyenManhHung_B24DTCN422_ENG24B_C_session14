#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
int main(){
    char s[10005];
    gets(s);
    for(int i=0;i<strlen(s);i++)printf("%c ", s[i]);
}
