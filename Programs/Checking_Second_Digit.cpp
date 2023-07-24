#include<iostream>
using namespace std;
int main()
{
	int x;
	cout<<"Enter a double digit number: ";
	cin>>x;
if(x>=10&&x<=100){if(x%5==0&&x%2==1)
    cout<<"It's second digit is five.";
	else
	{
	cout<<"It's second digit is not five.";}
}
else if(x<=9||x>=100){
    cout<<"Try again!";return 0;}
	
	
	return 0;
}
