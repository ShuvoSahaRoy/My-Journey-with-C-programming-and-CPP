#include<stdio.h>
int main()
{
    int digit,res=0,n,tc,i;
    scanf("%d",&tc);
    for(i=0;i<tc;i++)
    {
        res=0;
        scanf("%d",&n);
        while(n!=0)
            {
            digit=n%10;
            res=res+digit;
            n=n/10;
            }
        printf("%d\n",res);
    }
    return 0;
}

