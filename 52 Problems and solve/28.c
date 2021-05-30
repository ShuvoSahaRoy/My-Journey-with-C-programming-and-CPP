#include<stdio.h>
int main()
{
    int arr[20],t,i,k,n,j;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&i);
        k=i;
        for(i=0;i<k;i++){
            scanf("%d",&arr[i]);
        }
        n=1;
        for(j=0;j<k-1;j++){
            if(arr[j]>arr[j+1]){
                n=0;
                break;
            }
        }
        if(n==0)
            printf("No\n");
        else
            printf("Yes\n");
    }
    return 0;
}
