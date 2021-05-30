#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,g,h,i,n;
    scanf("%d",&n);
    f=1;
    while(f<=n){
        g=1;
        while(g<f){
            printf(" ");
            g++;
        }
        h=n;
        while(h>f){
            printf("*");
            h--;
        }
        i=n;
        while(i>=f){
            printf("*");
            i--;
        }
        printf("\n");
        f++;
    }
    a=2;
    while(a<=n){
        b=n-1;
        while(b>=a){
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
}
