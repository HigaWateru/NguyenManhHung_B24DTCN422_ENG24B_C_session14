#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
int main(){
    char s[]="Rikkei Academy";
    for(int i=0;i<strlen(s);i++)if(s[i]!=' ')printf("%c ",s[i]);
}
