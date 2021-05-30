#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,t;
    char str[10001];
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf(" %[^\n]",str);
        for(j=0;str[j]!='\0';j++){
        if(str[j]== 'a'|| str[j] == 'e' || str[j] == 'i' || str[j] == 'o' || str[j] == 'u')
            printf("%c",str[j]);
    }
    printf("\n");
        for(j=0;str[j]!='\0';j++)
        {
            if(str[j]!= 'a'&& str[j] != 'e' && str[j] != 'i' && str[j] != 'o' && str[j] != 'u' && str[j]!= ' '2){
                printf("%c",str[j]);}
        }
        printf("\n");
    }
    return 0;
}
