#include<iostream>
using namespace std;

template <class t>

t swap(int &a,int &b){
    t temp;
    temp = a;
    a=b;
    b= temp;
}

int main()
{
    int a=10;
    int b=20;
    swap(a,b);
    cout<<a<<"/n"<<b<<endl;
}
