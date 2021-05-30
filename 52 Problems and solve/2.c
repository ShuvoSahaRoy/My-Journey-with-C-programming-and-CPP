#include<stdio.h>
#include<string.h>

int main()
{
    int tc,i,l;
    char n[101];
    scanf("%d",&tc);
    for(i=1;i<=tc;i++)
    {
        scanf("%s",n);
        l=strlen(n);
        if(n[l-1]%2==0)
            printf("even\n");
        else
            printf("odd\n");
    }
    return 0;
}
