#include<stdio.h>
#include<stdio.h>
int main()
{
    int t,i,j,l;
    char str[1001];
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf(" %[^\n]",str);
        l = strlen(str);
        for(j=l-1;j>=0;j--)
        {
            printf("%c",str[j]);
        }
        printf("\n");
    }
    return 0;
}
