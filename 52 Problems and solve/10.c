#include<stdio.h>
int main()
{
    int t,i,r1,r2,b;
    double cr,rc;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d %d %d",&r1,&r2,&b);
        cr = r2 / (((300 - b)*1.00)/6);
        rc = (r1-r2+1) / (b*1.00/6);
        printf("%.2lf %.2lf\n", cr , rc );
    }
    return 0;
}
