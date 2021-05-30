#include<stdio.h>
#include<math.h>

int main()
{
    int tc,i,num,sq;
    scanf("%d",&tc);
    for(i=1;i<=tc;i++)
    {
        scanf("%d",&num);
        sq=sqrt(num);
        if(sq*sq==num)
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}
