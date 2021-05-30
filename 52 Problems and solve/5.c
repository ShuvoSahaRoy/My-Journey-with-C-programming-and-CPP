#include<stdio.h>
int main()
{
    int tc,i,n,j,k;
    scanf("%d",&tc);
    for(i=1;i<=tc;i++)
    {
        scanf("%d",&n);
        for(k=1;k<=n;k++)
        {
            for(j=1;j<=n;j++)
            {
                printf("*");
                if(j==n)
                    printf("\n");
            }
        }
    }
    return 0;
}
