#include<iostream>
using namespace std;

class A
{
    public:
A()
 {
  cout << "Constructor called";
 }

~A()
 {
  cout << "Destructor called";
 }
};

int main()
{
 A obj1;   // Constructor Called
} //  Destructor called for obj1
