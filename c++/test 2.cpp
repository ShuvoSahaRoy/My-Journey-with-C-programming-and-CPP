#include<iostream>
using namespace std;

class r{
public:
    int height;
    int width;
    int area()
    {
        return height*width;
    }
};

int main()
{
    r ob;
    ob.height=5;
    ob.width=5;
    cout<<"area = "<<ob.area()<<endl;
    return 0;
}
