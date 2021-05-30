#include<stdio.h>
int main()
{
    int t,n,i,m,j;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        if(n<25)
            printf("%d\n",n/5);
        else
        {
            m=n/5;
            j=n/25;
            printf("%d\n",m+j);
        }
    }
    return 0;
}
