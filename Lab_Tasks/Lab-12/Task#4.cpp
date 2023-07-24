/*Task#4 Write a C++ class that demonstrates the concept 
of run time polymorphism (method overriding with appropriate code comments).*/


#include <iostream>
using namespace std;

class Base
{
   public:
    void print()
	{
        cout<<"This is Base Function"<<endl;
    }
};

class Derived : public Base 
{
   public:
    void print() 
	{
        cout<<"This is Derived Function"<<endl;
    }
};

int main() 
{
	Base b1;
    Derived d1;
    b1.print();
    cout<<"\n";
    d1.print();
    return 0;
}