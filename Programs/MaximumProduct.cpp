#include<iostream>
using namespace std;
int main()
{
	int arr[5];
	int y;
	int z;
	for(int i=0; i<5;i++)
	{
		cout<<"Enter number "<<i+1<<": ";
		cin>>arr[i];
	}
    int k=arr[0];
	for(int i=0; i<5; i++)
	{
		if(k<arr[i])
		{
			int temp = k;
		    k=arr[i];
		    arr[i]=temp;
		}
	}
	y=arr[0];
	for(int i=0; i<5; i++)
	{
	
		if(y>arr[i] && y<k)
		z=y;
	}
	cout<<arr[z]<<endl;
	cout<<"Maximum number is: "<<k;
	
	return 0;
}