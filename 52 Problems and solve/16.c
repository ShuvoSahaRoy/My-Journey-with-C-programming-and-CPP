#include<stdio.h>
#include<string.h>

void pr(char st[])
{
    int i;
    for(i=strlen(st)-1;i>=0;i--){
        printf("%c",st[i]);
    }
}

int main()
{
    int i,j,t,k;
    char s[1001],word[1002];
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf(" %[^\n]",s);
        for(j = 0,k=0;j<strlen(s);j++)
        {
            if(s[j]!= ' ')
            {
                word[k] = s[j];
                k++;
            }
            else if(k>0){
                word[k]='\0';
                pr(word);
                //printf("%s\n",word);
                printf(" ");
                k=0;
            }
        }
        if(k>0)
        {
            word[k]='\0';
            pr(word);
           // printf("%s\n",pr(word));
        }
    }

    return 0;
}
