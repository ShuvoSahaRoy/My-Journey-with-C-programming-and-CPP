#include<stdio.h>
#include<string.h>
int main()
{
    int i,t;
    char str[101];
    scanf("%d",&t);
    while(t--){
        scanf("%s",str);
        for(i=0;i<strlen(str);i++)
        {
            printf("%d",str[i]-'A'+1);
        }
        printf("\n");
    }
    return 0;
}
