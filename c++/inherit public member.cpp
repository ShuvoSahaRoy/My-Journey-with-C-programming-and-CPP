#include<iostream>
using namespace std;

class stu{
public:
    int roll;
    int mark;
    void print () {cout<<mark<<" "<<roll<<endl;}
};

class result : public stu{
public :
    void set() {cin>>roll>>mark;}
};
int main()
{
    result ob;
    //ob.mark=75;
    //ob.roll=1;
    ob.set();
    ob.print();
    //cout<<ob.mark<<" "<<ob.roll<<endl;

    return 0;
}
