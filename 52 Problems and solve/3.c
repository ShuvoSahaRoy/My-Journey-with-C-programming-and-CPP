#include<stdio.h>

int main()
{
    int i,n=0;

    for(i=1000;i>0;i--)
    {
        printf("%d\t",i);
        n++;
        if(n%5==0)
            printf("\n");
    }
    return 0;
}
