#include<iostream>

using namespace std;

template<class t,class t1>

t add(t a,t1 b){
    return a+b;
    }

int main()
{
    int a=6,b=5;
    cout<<"C="<<add(a,b)<<endl;
    float c=6.6;
    int d=5;
    cout<<add(c,d)<<endl;
}
