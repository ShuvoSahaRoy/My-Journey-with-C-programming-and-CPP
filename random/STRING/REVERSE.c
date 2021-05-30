#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    gets(s);
    int i;
    for(i=strlen(s);i>=0;i--){
        printf("%c",s[i]);
    }
    return 0;
}
