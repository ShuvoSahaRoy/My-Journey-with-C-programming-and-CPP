#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,t,count;
    char str[10001];
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf(" %[^\n]",str);
        count =0;
        for(j=0;j<strlen(str);j++)
        {
           if(str[j] == ' ')
                count++;
        }
        printf("Count = %d\n",count+1);
    }
    return 0;
}
