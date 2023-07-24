/*Task#1 Write a program with a mother class and an inherited daugther class.
Both of them should have a method void display() that prints a message
(different for mother and daughter ). In the main define a daughter and
call the display() method on it.*/
#include<iostream>
using namespace std;
class Mother
{
	public:
		void display()
		{
			cout<<"\nThis is mother class\n";
		}
};
class Daughter:public Mother
{
	public:
		void display()
		{
			cout<<"\nThis is daughter class derived from mother class\n";
		}		
};
int main()
{
	Daughter elsa;
	elsa.display();
	return 0;
}