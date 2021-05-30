#include<iostream>
using namespace std;
class Number_Objects
{
    static int count;
    public:

    Number_Objects()
    {
        count++;
    }
};
int Number_Objects::count;
int main()
    {
        Number_Objects obj1,obj2;
        //cout<<count<<endl;
    }
