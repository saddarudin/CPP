#include<iostream>
using namespace std;
int main()
{
	int a[5];
	int sum = 0;
	float ave;
	for(int i=0; i<=4; i++)
	{
		cout<<"Enter value "<<i+1<<": ";
		cin>>a[i];
		sum+=a[i];
	}
	ave=sum/5;
	cout<<endl<<"Sum = "<<sum<<endl<<"Average = "<<ave;
	return 0;
	
}