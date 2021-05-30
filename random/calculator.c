#include<stdio.h>
int main()
{
	int  a,b;
	char x; while(scanf("%d%c%d",&a,&x,&b)==3)
	if(x=='+')
	printf("%d\n",a+b);
	else if(x=='-')
	printf("%d\n",a-b);
	else if(x=='*')
	printf("%d\n",a*b);
	else if(x=='/')
	printf("%d\n",a/b);
	return 0;
}
