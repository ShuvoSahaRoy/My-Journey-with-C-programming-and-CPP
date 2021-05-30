#include<stdio.h>
int main()
{
    int t,f,i;
    long long n=1,j;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d",&f);
        for(j=2;j<=f;j++)
        {
            n=n*j;
        }
        printf("%lld\n",n);
        n=1;
    }
    return 0;
}
