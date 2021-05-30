#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int k =1;k<=t;k++){
    char line[1000];
    string s;
    int c=0;
    gets(line);
    istringstream iS(line);
    while(iS>>s)
    {
        for(int i=s.length();i>=0;i--){
            cout<<s[i-1]; ///reverse word
        }
    }
    cout<<endl;
    }
    return 0;
}

