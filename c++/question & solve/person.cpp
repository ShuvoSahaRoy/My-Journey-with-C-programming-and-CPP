#include<iostream>
using namespace std;

class Person {
  public:
    string name;
    string address;
};

class Customer: public Person
{
    string ptype;
    public:
    string personType()
    {
        ptype = "Customer\n";
        return ptype;
    }
};

class Student: public Person
{
    string ptype;
    public:
    string personType()
    {
        ptype = "Student\n";
        return ptype;
    }
};

int main()
{
    Student obj4Student;
    cout<< obj4Student.personType();

    Customer obj4Customer;
    cout<< obj4Customer.personType();

}
