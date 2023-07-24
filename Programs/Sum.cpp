#include<iostream>
using namespace std;
int main()
{
	int x,n,sum=0;
	cout<<"Enter number of terms: ";
	cin>>n;
	for(int x=1;x<=n+n;x+=2)
{
	cout<<x<<" ";
	sum+=x;
	}	
	
	cout<<"\nTotal sum= "<<sum;
	
	return 0;
}
