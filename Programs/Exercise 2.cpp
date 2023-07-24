#include<iostream>
using namespace std;
int main()
{
	int a[5];
	int small;
	for(int i= 0; i<5; i++)
	{
		cout<<"Enter value "<<i+1<<": ";
		cin>>a[i];	
	}
	small = a[0];
	for(int i=1; i<=4; i++)
	{
		if(small<a[i])
		small = a[i];
	}
	cout<<"Smallest value is: "<<small;
}
