//Lab
#include<iostream>
using namespace std;
int main()
{
	float x,y,z;
	cout<<"Enter num1: ";
	cin>>x;
	cout<<"Enter num2: ";
	cin>>y;
	cout<<"Enter num: ";
	cin>>z;
	if(x>y&&x>z)cout<<"Greatest number is: "<<x;
	else if(y>x&&y>z)cout<<"Greatest number is: "<<y;
	else if(z>x&&z>y)cout<<"Greatest number is: "<<z;
	else{cout<<"Error!";
	}
	
	
	
	return 0;
}
