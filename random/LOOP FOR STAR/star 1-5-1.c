#include<stdio.h>
int main()
{
    int a,b,f,g,n;
    scanf("%d",&n);
    f=1;
    while(f<=n){
        for(g=1;g<=f;g++){
            printf("*");
        }
        printf("\n");
        f++;
    }
    a=1;
    while(a<=n){
        for(b=n-1;b>=a;b--){
            printf("*");
        }
        printf("\n");
        a++;
    }
}
