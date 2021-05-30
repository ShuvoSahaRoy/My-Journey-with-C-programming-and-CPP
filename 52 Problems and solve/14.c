#include<stdio.h>
#include<string.h>
int main()
{
    int t,i,l;
    char str[10001];
    char ch[2];
    int j,count=0;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf(" %[^\n]",str);
        scanf("%s",ch);
        count=0;
        for(j=0;j<strlen(str);j++){
            if(str[j]== ch[0]){
                count++;
            }
        }
        if(count==0){
            printf("'%s' is not present\n",ch);
        }
        else
            printf("Occurrence of '%s' in '%s' = %d\n",ch,str,count);
    }
    return 0;
}
