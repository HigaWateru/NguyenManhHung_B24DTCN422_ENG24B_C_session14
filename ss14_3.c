#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
int main(){
    char s[]="Rikkei Academy";
    for(int i=strlen(s)-1;i>=0;i--)if(s[i]!=' ')printf("%c ",s[i]);
}
