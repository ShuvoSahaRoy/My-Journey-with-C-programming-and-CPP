#include<stdio.h>
int main()
{
    int a,b;
    a=1;
    for(a;a<=5;a++){
        for(b=1;b<=a;b++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
