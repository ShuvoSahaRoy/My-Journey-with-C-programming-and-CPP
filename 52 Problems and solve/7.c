#include<stdio.h>
#include<stdlib.h>

int main()
{
    char line[1000000];
    char *p,*e;
    long input;
    int count=0;
    int i,tc;
    scanf("%d",&tc);
    for(i=1;i<=tc;i++)
        {
            scanf("%[^\n]",line);

            p=line;


            for( p= line; ; p =e)
            {
                input = strtol (p, &e, 10);
                if( p==e )
                {
                    break;
                }
                count++;
            }
            printf("%d\n",count);
        }
    return 0;
}
