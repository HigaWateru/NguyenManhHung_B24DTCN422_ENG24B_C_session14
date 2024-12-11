#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
int main(){
    char s[]="Rikkei Academy";
    int count=0;
    for(int i=0;i<strlen(s);i++)if((s[i]>='a'&&s[i]<='z'||(s[i]>='A'&&s[i]<='Z')))count++;
    printf("So ki tu la chu trong chuoi la: %d",count);
}
