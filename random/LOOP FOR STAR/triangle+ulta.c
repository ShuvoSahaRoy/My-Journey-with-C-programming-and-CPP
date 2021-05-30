#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,g,h,i,n;
    scanf("%d",&n);
    a=1;
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
        e=1;
        while(e<a){
            printf(" ");
            e++;
        }
        printf("\n");
        a++;
    }
    f=1;
    while(f<=n-1){
        g=1;
        while(g<=f){
            printf(" ");
            g++;
        }
        h=n;
        while(h>f){
            printf("*");
            h--;
        }
        i=n-2;
        while(i>=f){
            printf("*");
            i--;
        }
        printf("\n");
        f++;
    }
}
