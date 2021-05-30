#include<stdio.h>

int gcd(int a,int b){
    int temp;
    while(b!= 0)
    {
        temp = b;
        b = a%b;
        a = temp;
    }
    return a;
}
int main()
{
    int a,b,c,t;
    scanf("%d",&t);
    while(t--){
            scanf("%d%d",&a,&b);
            c = gcd(a,b);
            printf("%d\n",(a*b)/c);
    }

    return 0;
}
