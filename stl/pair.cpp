#include<bits/stdc++.h>
using namespace std;

int main()
{
    pair <int ,int> p;
    p.first = 10;
    p.second = 20;
    int c = p.first+p.second;
    cout<<c<<endl;

    pair <int ,int> p2(20,40);
    pair <int ,int> p3;
    p3 = make_pair(50,60);
    int d = p2.first+p2.second;
    int e = p3.first+p3.second;
    cout<<d<< " "<<e<<endl;
}
