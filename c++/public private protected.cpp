#include<iostream>
using namespace std;

class r{
    protected:
    int height;
    int width;
public:
    void set(int h,int w);
    int area();
};
void r::set(int h,int w)
{
    height=h;
    width=w;
}
int r:: area()
{
    return height*width;
}

int main()
{
    r ob;
    ob.set(5,5);
    cout<<"area = "<<ob.area()<<endl;
    return 0;
}

