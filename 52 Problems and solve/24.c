#include<stdio.h>
int main()
{
    int arr[100],i,t,j;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&i);
        for(j=0;j<i;j++){
            scanf("%d",&arr[j]);
        }
        for(j=0;j<i;j+=2){
            printf("%d ",arr[j]);
        }
        printf("\n");
    }
    return 0;
}
