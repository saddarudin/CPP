#include<iostream>
using namespace std;
int main(){
	cout<<"Enter a number: ";
	int x;
	cin>>x;
	if(x%2==0){goto print;}
	else
	{
	cout<<"Odd number.";return 0;}
	print: cout<<"Even number.";return 0;
}