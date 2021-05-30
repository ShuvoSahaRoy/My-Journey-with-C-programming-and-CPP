#include<bits/stdc++.h>

using namespace std;

typedef pair<int , int> pii;

vector <string> vertexName;
map<string, int> vertexNumbers;

int main()
{
        int ver,eg;
        cin>>ver>>eg;
        vector<pii> v[ver];

        for(int i = 0; i<ver;i++)
        {
            string str;
            cin >> str;
            vertexName.push_back(str);
            vertexNumbers[str] = i;
        }
        for(int i =0 ; i< eg; i++)
        {
            string str1,str2;
            cin>>str1>>str2;
            int source;
            pii p;
            source = vertexNumbers[str1];
            p.first = vertexNumbers[str2];
            cin>> p.second;
            v[source].push_back(p);
            int sr2 = p.first;
            p.first = source;
            v[sr2].push_back(p);
        }
        for(int i =0 ; i<ver;i++)
        {
            cout<<vertexName[i]<< " -- ";
            for(int j =0; j < v[i].size() ; i++)
            {
                cout<< vertexName[v[i][j].first]<<"-"<< v[i][j].second<< " ";
            }
            cout<<endl;
        }
        return 0;
}
