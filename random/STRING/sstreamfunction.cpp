#include<bits/stdc++.h>

using namespace std;

int main()
{
    char line[1000];
    string s;
    int c=0;
    gets(line);
    istringstream iS(line);//breaking string into word
    while(iS>>s)
    {
        for(int i=s.length();i>=0;i--){
            cout<<s[i-1]; ///reverse word
        }
        c++;
    }
    cout<<endl<<"Total word "<<c<<endl;
    return 0;
}
