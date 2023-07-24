#include<iostream>
using namespace std;
int main()
{
	int x,y,c;
	char ch;
	cout<<"Enter num1: ";
	cin>>x;
	cout<<"Enter operator(+,-,*,/,%): ";
	cin>>ch;
	cout<<"Enter num2: ";
	cin>>y;
	c=x%y;
	if(ch=='+')cout<<x<<ch<<y<<"="<<x+y;
	else if(ch=='-')cout<<x<<ch<<y<<"="<<x-y;
	else if(ch=='*')cout<<x<<ch<<y<<"="<<x*y;
	else if(ch=='/')cout<<x<<ch<<y<<"="<<x/y;
	else if(ch=='%')cout<<x<<ch<<y<<"="<<c;
	else{cout<<"Error!";
	}
	
	
	return 0;
}
