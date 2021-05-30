#include<stdio.h>
#include<string.h>
int main()
{
    int i,t,j,count;
    char str[1001];
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf(" %[^\n]",str);
        count=0;
        for(j=0;j<strlen(str);j++)
        {
            if(str[j]== 'a'|| str[j] == 'e' || str[j] == 'i' || str[j] == 'o' || str[j] == 'u')
                count++;
        }
        printf("Number of vowels = %d\n",count);
    }
    return 0;
}
