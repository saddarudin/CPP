/*8.	Write C++ code to make a class that contains a member function
 that takes two integers as arguments and returns their Sum.
 The program checks to ensure that: The First number is an Odd
 number and the second number is an Even number.
 The program also checks to ensure that both numbers are positive and greater than zero.
 The program also checks to ensure that: the first number is greater than the second number.*/
#include<iostream>
#include<conio.h>
using namespace std;
class Sum
{
	public:
		void display(int a, int b)
		{
			cout<<"\nSum= "<<a+b;
		}
};
int main()
{
	system("cls");
	Sum t1;
	int x,y;
	cout<<"Enter a positive odd number greater than 1: ";
	cin>>x;
	cout<<"\nEnter a positive even number less than first number: ";
	cin>>y;
	if(x<=1 || y<=0)
	{
		cout<<"\nEnter only positive numbers and first number should be greater than 1\n";
		cout<<"Press any key";
		getch();
		main();
	}
	if(x%2 == 0 || y%2 == 1)
	{
		cout<<"\nIncorrect input Try again\n";
		cout<<"Press any key";
		getch();
		main();		
	}
	if(y>x)
	{
		cout<<"\nSecond number should be less than first number\n";
		cout<<"Press any key";
		getch();
		main();		
	}
	else 
	{
		t1.display(x,y);
	}
	return 0;
}