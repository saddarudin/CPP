/*Task#3 Write a C++ class that demonstrates the concept of compile 
time polymorphism (method overloading with appropriate code comments) */


/*Answers:
At compile time, C++ compiler knows which method to invoke by 
checking the method signatures.  So, this is called compile time  
polymorphism or static binding. 
*/
#include<iostream>
using namespace std;
class OverLoad
{
	public:
		void Sum(int a, int b)
		{
			cout<<"\nThis is function with two parameters\n";
			cout<<"Sum = "<<a+b;
		}
		void Sum(int a, int b, int c)     // Overloaded Function
		{
			cout<<"\nThis is function with three parameters\n";
			cout<<"Sum = "<<a+b+c;
		}
};
int main()
{
	OverLoad O;
	O.Sum(3,4);
	O.Sum(6,4,5);
}