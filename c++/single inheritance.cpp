#include<iostream>
using namespace std;

class info{
    int id;
public:
    void setid();
    int getid();
};

class stu:public info{
public:
    void print();
};

void info::setid(){
    cin>>id;
}

int info::getid(){
    return id;
}
void stu::print(){
    cout<<getid()<<endl;
}

int main()
{
    stu ob;
    ob.setid();
    ob.print();

    return 0;
}
