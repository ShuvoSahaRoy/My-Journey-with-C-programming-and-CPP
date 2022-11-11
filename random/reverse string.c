//Code in C language
#include<stdio.h>
#include<string.h>

int main(){
    char s[500];
    scanf("%[^\n]s",s);//%[^\n] to take input till a newline is detected
    char temp;
    int i,j,n = strlen(s);
    for(i=0;i<n/2;i++){//reverse entire string
        temp = s[i];
        s[i] = s[n-1-i];
        s[n-1-i] = temp;
    }
    int len,start=0,end=-2;//start and end of a word
    for(i=0;i<=n;i++){
        if(s[i]==' '||s[i]=='\0'){//end of a word
            start=end+2;
            end=i-1;
            len=end-start+1;
            for(j=start;j<start+len/2;j++){//reversing the word
                temp = s[j];
                s[j]=s[start+end-j];
                s[start+end-j]=temp;
            }
        }
    }
    printf("%s\n",s);
    return 0;
}
