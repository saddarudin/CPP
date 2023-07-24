#include<iostream>
using namespace std;
int main()
{
	int A[10];
	int temp = 0;
	for(int i=0; i<10; i++)
	{
		cout<<"Enter number "<<i+1<<" : ";
		cin>>A[i];
	}
	int k=A[0];
	for(int i=1; i<10; i++)
	{
		if(k<A[i])
		{
			temp = k;
		    k=A[i];
		    A[i]=temp;
		}
		
	}
	cout<<"\n\nMaximum value is : "<<k;
}