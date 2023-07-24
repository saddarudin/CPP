


/*                             Power calculate         */

#include<iostream>
using namespace std;
int main(void)
{
	float voltage;
	float current;
	float power;
	cout<<"Enter voltage in volts: ";
	cin>>voltage;
	cout<<"Enter current in Amps: ";
	cin>>current;
	power=voltage*current;
	cout<<"Power in watts  = "<<power;
	return 0;
}