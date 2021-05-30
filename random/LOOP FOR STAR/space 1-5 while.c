#include<stdio.h>
int main()
{
    int a,b,c,d;
    a=1;
    scanf("%d",&d);
    while(a<=d){
        b=d;
        while(b>a){
            printf(" ");
            b--;
        }
        c=1;
        while(c<=a){
            printf("*");
            c++;
        }
        printf("\n");
        a++;
    }
    return 0;
}
