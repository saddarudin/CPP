#include<iostream>
using namespace std;
int x;
int& setx()
{
	return x;
}
int main()
{
	setx()=90;
	cout<<"X= "<<x;
	setx();
	return 0;
}