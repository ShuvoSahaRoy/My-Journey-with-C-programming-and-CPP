#include<stdio.h>
int main()
{
    int a,b,c,d,e,f;
    a=1;
    while(a<=5){
        b=5;
        while(b>a){
            printf(" ");
            b--;
        }
        c=1;
        while(c<=a){
            printf("*");
            c++;
        }
        d=1;
        while(d<a){
            printf("*");
            d++;
        }
        printf("\n");
        a++;
    }
    return 0;
}
