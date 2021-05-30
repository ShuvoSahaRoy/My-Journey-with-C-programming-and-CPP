#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,count,t;
    char str[10001];
    char *word;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf(" %[^\n]",str);
        word = strtok(str, " ,!;?. ");
        count=0;
        while(word !=  NULL)
        {
            if(strlen(word) > 0)
            {
                count++;
            }
            word = strtok(NULL, " ,!;?. ");
        }
        printf("%d\n",count);
    }
    return 0;
}
