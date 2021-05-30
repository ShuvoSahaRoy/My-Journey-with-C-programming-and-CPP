#include<iostream>
using namespace std;

class t{
    const int i=10;
public:
    t ()
    {
        cout<<i<<endl;
    }
};
int main()
{
    t obj;
    return 0;
}
