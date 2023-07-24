#include<iostream>
#include<conio.h>
using namespace std;
void factorial(int x)
{
	int b=1;
	for(int s=x; s>=2; s--)
	{
		b*=s;
	}
	cout<<"Its Factorial is: "<<b;
	
}
int main()
{
	char ch;
	do
	{
		int a=0;
		cout<<"Enter any number greater than 0: ";
		cin>>a;
		factorial(a);
		cout<<"\nWould you like to continue(y/n): ";
		ch=getch();
		system("cls");
	}while(ch=='y');
	return 0;
	
}