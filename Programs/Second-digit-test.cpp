#include<iostream>
using namespace std;
int main()
{
	int x;
	cout<<"Enter a two digit number: ";
	cin>>x;
	if(x>=9&&x<=100){
		if(x%2==0&&(x-2)%10==0)
		cout<<"It's second digit is 2.";
		else
		cout<<"It's second digit is not 2.";
	
	}
	else if(x<=9||x>=10)
	{

		cout<<"Try again!\n";
		main();
	}
	
	return 0;
}
