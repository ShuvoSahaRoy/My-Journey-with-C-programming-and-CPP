#include<stdio.h>
int main()
{
	int a,b,c,i,num,t,sum;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&a);
		for(b=2;b<=a;b++){
                sum=0;
			for(i=1;i<=b/2;i++){
				if(b%i==0){
					sum=sum+i;
			}
			}
			if(sum==b){
               printf("%d\n",b);
			}
		}
	}
	return 0;
}
