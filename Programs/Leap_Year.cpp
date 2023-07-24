


/* Write a program that checks that the entered year is a leap year or not?         */

#include<iostream>
using namespace std;
int main(void)
{
    int year;
	cout<<"Enter year: ";
	cin>>year;
	if(year%4 == 0)
	cout<<"It is a leap year";
	else 
	cout<<"It's not a leap year"; 
	return 0;
}