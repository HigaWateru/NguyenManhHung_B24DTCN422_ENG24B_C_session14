#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
int main(){
    char s[]="Rikkei Academy";
    char ch;
    int count;
    scanf("%c",&ch);
    for(int i=0;i<strlen(s);i++)if(s[i]==ch)count++;
    printf("So ki tu %c trong chuoi %s la %d ki tu",ch,s,count);
}
