#include<stdio.h>
#include<math.h>
int main()
{
    unsigned long int a,t,i,n,sum=0,k;
    scanf("%uld",&t);
    while(t--)
    {
        scanf("%uld",&n);
        k=n;
        sum=0;
        for(i=1;i<=n/2;i++){
            if(n%i==0){
                sum+= i;
            }
        }
        if(k==sum)
            printf("Yes, %d is a perfect number\n",k);
        else
            printf("No, %d is not a perfect number\n",k);
        sum =0;
    }
    return 0;
}
