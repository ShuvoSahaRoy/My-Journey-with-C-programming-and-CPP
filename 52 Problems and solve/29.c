#include<stdio.h>
#include<string.h>
int main()
{
    char ch;
    int t;
    scanf("%d",&t);
    while(t--)
    {
        scanf(" %c", &ch);
        if(ch >= 'a'&&ch<= 'z')
            printf("Lowercase character\n");
        else if(ch >= 'A' && ch<= 'Z')
            printf("Upper case\n");
        else if(ch >= '0'&& ch<= '9')
            printf("Digit\n");
        else
            printf("Special character\n");
    }
    return 0;
}
