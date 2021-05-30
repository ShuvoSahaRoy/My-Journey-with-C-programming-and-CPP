#include<stdio.h>
int main()
{
    int tc,n1,n2,n3,i;
    scanf("%d",&tc);
    for( i = 1 ; i <= tc ; i++)
    {
        scanf(" %d %d %d",&n1,&n2,&n3);
        if(n1<n2&&n2<n3)
        {
            printf("Case %d: %d %d %d\n",i,n1,n2,n3);
        }
        if(n1<n3&&n2>n3)
        {
            printf("Case %d: %d %d %d\n",i,n1,n3,n2);
        }
        if(n1>n2&&n3>n1)
        {
            printf("Case %d: %d %d %d\n",i,n2,n1,n3);
        }
        if(n2>n1&&n3<n1)
        {
            printf("Case %d: %d %d %d\n",i,n3,n1,n2);
        }
        if(n1>n2&&n2>n3)
        {
            printf("Case %d: %d %d %d\n",i,n3,n2,n1);
        }
        if(n1>n2&&n2<n3)
        {
            printf("Case %d: %d %d %d\n",i,n2,n3,n1);
        }
    }
    return 0;
}
