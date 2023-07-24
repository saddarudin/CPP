#include<iostream>
using namespace std;
void Fabnoci(int n)
{
	double first=0; 
	double second=1;
	double next=0;
	cout<<first<<' '<<second<<' ';
	for(int a=1; a<=n-2; a++)
	{
		next=first+second;
		cout<<next<<' ';
		first=second;
		second=next;
	}
}
int main()
{
	int x;
	cout<<"Enter number of terms: ";
	cin>>x;
	Fabnoci(x);
	
}