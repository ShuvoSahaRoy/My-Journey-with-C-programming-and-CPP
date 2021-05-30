#include<stdio.h>
#include<string.h>
int main()
{
    int i,t,j,count[26]={0},k;
    char s[1001];
    scanf("%d",&t);
    printf("%d\n",count[10]);
    for(i=0;i<t;i++){
        scanf("%s",s);
        for(j=0;j<strlen(s);j++)
        {
            if(s[j]>= 'a'&&s[j]<= 'z')
            {
                count[s[j]-'a']++;
            }
        }
        for(j=0;j<26;j++)
        {
            if(count[j]!= 0)
            {
                printf("%c = %d\n",'a'+j,count[j]);
            }
        }
    }
    return 0;
}
