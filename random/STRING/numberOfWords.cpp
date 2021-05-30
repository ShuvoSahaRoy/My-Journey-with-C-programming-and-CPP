#include<bits/stdc++.h>
using namespace std;

int countWords(char *pstr)
{
    int numWords = 0;
    int len = 0;
    if(pstr == NULL)
        return 0;

    while(*pstr)
    {
        if(*pstr == ' ')
            len = 0;
        else if(++len==1)
            numWords++;

        pstr++;
    }
    return numWords;
}
int main()
{
    ///char str[] = "Let's count word";    //working
    char str[1000];
    gets(str);     //working
    ///scanf("%s",str); /// scanf  can not work for in string
    ///string data type will not work in this code,actually in countWords function
    int i =countWords(str);
    cout<<i<<endl;
    return 0;
}

