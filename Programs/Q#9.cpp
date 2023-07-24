/*9.	Write a C++ class that contains a member function that takes
 an integer as an argument and display its table from 1 to 10,
 when the Tab key will be pressed*/
#include<iostream>
#include<conio.h>
using namespace std;
class Table
{
	public:
		void display(int x)
		{
			for(int i=1;i<=10;i++)
			{
				cout<<i<<"*"<<x<<" = "<<i*x<<endl;
			}
		}
};
int main()
{
	int a;
	cout<<"Enter any number greater than zero: ";
	cin>>a;
	char ch;
	Table t1;
	cout<<"Press Tab Key to see table of "<<a<<endl;
	ch=getch();
	if(ch=='	')
	{
		t1.display(a);
	}

	return 0;
}