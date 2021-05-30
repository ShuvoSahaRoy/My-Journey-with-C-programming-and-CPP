#include<stdio.h>
#include<string.h>
int main()
{
    char x[5];
    int i=0;
    x[0]='a';
    x[1]='b';
    x[2]='c';
    x[3]='d';
    x[4]='e';
    while(x[i]!='d'){
    printf("%c\n",x[i]);
    i++;
    }
    printf("%c\n",x[i]);
    return 0;
}
