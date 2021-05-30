#include<iostream>
using namespace std;

class stu{
protected:
    int roll;
    int mark;
};

class result : private stu{
public :
    void set() {cin>>roll>>mark;}
    void print() {cout<<mark<<" "<<roll<<endl;}
};
int main()
{
    result ob;
    ob.set();
    ob.print();
    return 0;
}
