/*Task # 2 
Create a class called MyClass that has one int member.
Include member functions to initialize it to 0,
to initialize it to an integer value, to display it. 
Write a program to test this class.
*/
#include<iostream>
using namespace std;
class MyClass
{
	private:
		int x;
	public:
		MyClass()
		{
			x=0;
		}
		void Integer()
		{
			x=15;
		}
		void display()
		{
			cout<<"Value of x is: "<<x;
		}
};
int main()
{
	MyClass m;
	m.Integer();
	m.display();
	return 0;
}