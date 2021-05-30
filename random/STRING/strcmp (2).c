#include<stdio.h>
int main()
{
    char s[100],r[100];
    scanf("%s %s",s,r);
    if(strcmp(s,r)==0){
    printf("same");}
    else{
        printf("not same");
    }
}
