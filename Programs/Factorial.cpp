/*Task# 9 write a program that takes an inter as an input and prints its factorial
Output
Number :  5
Factorial : 120 
 */
#include<iostream>
using namespace std;
int main()
{
	int x,i,count=1;
	cout<<"Enter any number greater than or equal to 0: ";
	cin>>x;
	for(int i=2;i<=x;i++)
	{
		count*=i;
	}
	cout<<"Factorial = "<<count;
}