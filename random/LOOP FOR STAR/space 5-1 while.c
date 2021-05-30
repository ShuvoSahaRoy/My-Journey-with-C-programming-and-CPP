#include<stdio.h>
int main()
{
    int a,b,c;
    a=1;
    while(a<=5){
        b=1;
        while(b<a){
            printf(" ");
            b++;
        }
        c=5;
        while(c>=a){
            printf("*");
            c--;
        }
        printf("\n");
        a++;
    }
    return 0;
}
