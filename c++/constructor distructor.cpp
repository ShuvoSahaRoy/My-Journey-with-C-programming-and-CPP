#include<iostream>
using namespace std;

class r{
    int height;
    int width;
public:
    void set(int h,int w);
    int area();
    r(int h,int w);
    ~r();
};
int r:: area()b
{
    return height*width;
}

r::r(int h,int w)
{
    height=h;
    width=w;
    cout<<"constructor "<<area()<<endl;
}

r::~r()
{
    cout<<"destructor "<<area()<<endl;
}
int main()
{
    r ob(5,6),ob1(1,2);
    //cout<<"area = "<<ob.area()<<endl;
    return 0;
}


