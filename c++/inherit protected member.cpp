#include<iostream>
using namespace std;

class stu{
private:
    int roll;
    int mark;
public :
    void set() {cin>>roll>>mark;}
    void print() {cout<<mark<<" "<<roll<<endl;}
};

class result : public stu{
public:
    void all(){set();print();}
};
int main()
{
    result ob;
    //ob.mark=75;
    //ob.roll=1;
    ///ob.set();
    //ob.print();
    //cout<<ob.mark<<" "<<ob.roll<<endl;
    ob.all();
    return 0;
}
