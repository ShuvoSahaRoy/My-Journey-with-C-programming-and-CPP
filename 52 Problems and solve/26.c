#include<stdio.h>
int main()
{
    int a,t,d;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&a);
        d=0;
        while(a>1){
            a=a/2;
            d++;
        }
        printf("%d\n",d+1);
    }
    return 0;
}
