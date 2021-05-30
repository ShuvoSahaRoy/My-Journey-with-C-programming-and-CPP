#include<iostream>
using namespace std;

class r{
public:
    int height;
    int width;
};

int main()
{
    r ob;
    ob.height=5;
    ob.width=4;

    cout<<"area = "<<ob.height*ob.width<<endl;
    return 0;
}
