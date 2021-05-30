//
//
//hoy nai

//
//

#include<stdio.h>
#include<math.h>
char arr[100001];
void getre()
{
     int i,j,k,p=0;

     for(i=0;i<100001;i++)
     {
         arr[i] = 1;
     }

     for(i=2;i<100;i++){
            p=0;
            for(j=2,k=0;j<i/2;j++){
            if(i%j==0){
                p++;
                break;}
            else
            {
                arr[k] = i;
                k++;
            }
        }
    }
}
int main()
{
    int i,j,count,t,a,b;
    getre();
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&a,&b);
        count =0;
        for(i=a;i<=b;i++)
        {
            if(arr[i])
            {
                count++;
            }
        }
        printf("%d\n",count);
    }
    return 0;
}
