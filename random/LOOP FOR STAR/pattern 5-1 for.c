#include<stdio.h>
int main()
{
    int a,b;
    a=1;
    for(a;a<=5;a++){
        b=5;
        for(b;b>=a;b--){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
