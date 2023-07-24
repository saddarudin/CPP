#include<iostream>
using namespace std;
int Factorial(int n)
{
	if(n>0)
	{
		return n*Factorial(n-1);
	}
	else 
	return 1;
}

int main()
{
	int n;
	cout<<"Enter any positive number: ";	
	cin>>n;
	cout<<"Its factorial is: "<<Factorial(n);
}