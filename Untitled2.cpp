#include<stdio.h>
#include<conio.h>
int main()
{
    int n, mp, i, count;
    scanf("%d", &n);
    int arr[n];
    for(i=0; i<n; i++)
        scanf("%d", &arr[i]);
    i=0;
    mp = arr[i];
    while(i<n)
    {
        if(mp<arr[i])
            mp = arr[i];
        i++;
    }
    while(1)
    {
        i=0;
        count=0;
        while(i<n)
        {
            if(mp%arr[i]==0)
                count++;
            i++;
        }
        if(count==n)
            break;
        else
            mp++;
    }
    printf("%d) = %d", arr[i], mp);
    getch();
    return 0;
}
