#include<stdio.h>
int main()
{
    int tc,i,n,d,j;
    scanf("%d",&tc);
    for(i=1;i<=tc;i++)
    {
        scanf("%d",&n);
        printf("Case %d:",i);
        for(j=1;j<=n;j++)
            {
                d=n%j;
                if(d==0)
                    printf(" %d",j);
                if(j==n)
                    printf("\n");
            }
    }
    return 0;
}
