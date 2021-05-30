///bidirectional
#include<bits/stdc++.h>

using namespace std;

typedef pair<int , int> pii;
int main()
{
        int ver,eg;
        cin>>ver>>eg;
        vector<pii> v[ver];

        for(int i = 0; i<eg;i++)
        {
            int source;
            pii p;
            cin>>source>>p.first>>p.second;
            v[source].push_back(p);
            //int s2 = p.first;
           // p.first = source;
           // v[s2].push_back(p);
        }

        for(int i=0;i< ver;i++)
        {
            cout<< i << " -- ";
            for(int j=0 ; j<v[i].size();j++)
            {
                cout<< v[i][j].first<< "-" << v[i][j].second<< " ";
            }
            cout<< endl;
        }
        cout<<endl;
        return 0;
}
