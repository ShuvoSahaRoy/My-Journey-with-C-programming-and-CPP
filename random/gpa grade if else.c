#include<stdio.h>
int main()
{
    int a;
    printf("Please Give a input\n");
    scanf("%d",&a);
    if(a>=80)
        printf("You got A+\n");
    else if(a>=70&& a<80)
        printf("You got A-\n");
    else if(a>=60&& a<70)
        printf("You got A\n");
        else if(a>=50&& a<60)
        printf("You got B\n");
    else if(a>=40&& a<50)
        printf("You got C\n");
    else if(a>=33&& a<40)
        printf("You got D\n");
    else
        printf("F\n");
        return 0;
}
