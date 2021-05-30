#include <stdio.h>
#include <string.h>

int main(void)
{
    int count = 0, c = 0, i, j = 0, k, space = 0;
    char str[10000000], p[500][100000], str1[20000000], ptr1[5000][100000];
    char *ptr;
    fgets(str, sizeof(str), stdin);
    for (i = 0;i<strlen(str);i++)
    {
        if ((str[i] == ' ')||(str[i] == ', ')||(str[i] == '.'))
        {
            space++;
        }
    }
    for (i = 0, j = 0, k = 0;j < strlen(str);j++)
    {
        if ((str[j] == ' ')||(str[j] == 44)||(str[j] == 46))
        {
            p[i][k] = '\0';
            i++;
            k = 0;
        }
        else
             p[i][k++] = str[j];
    }
    k = 0;
    for (i = 0;i <= space;i++)
    {
        for (j = 0;j <= space;j++)
        {
            if (i == j)
            {
                strcpy(ptr1[k], p[i]);
                k++;
                count++;
                break;
            }
            else
            {
                if (strcmp(ptr1[j], p[i]) != 0)
                    continue;
                else
                    break;
            }
        }
    }
    for (i = 0;i < count;i++)
    {
        for (j = 0;j <= space;j++)
        {
            if (strcmp(ptr1[i], p[j]) == 0)
                c++;
        }
        printf("%s %d\n", ptr1[i], c);
        c = 0;
    }
    return 0;
}
