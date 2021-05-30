#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    a=1;
    scanf("%d",&e);
    while(a<=e){
        b=1;
        while(b<a){
            printf(" ");
            b++;
        }
        c=e;
        while(c>=a){
            printf("*");
            c--;
        }
        d=e-1;
        while(d>=a){
            printf("*");
            d--;
        }
        printf("\n");
        a++;
    }
    return 0;
}
