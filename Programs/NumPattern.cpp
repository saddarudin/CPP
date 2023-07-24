#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
int main()
{
	int array[10];
	int temp;
	for(int i=0; i<10; i++)
	{
		cout<<"Enter number "<<i+1<<":";
		cin>>array[i];
	}
	for(int i=0; i<9; i++)
	{
		for(int j=i+1; j<10; j++)
		{
		    if(array[i]>array[j])
		    {
		    	temp=array[i];
		        array[i]=array[j];
		        array[j]=temp;
			}
		}	
	}
	cout<<endl<<endl;
    for(int i=0; i<10; i++)
	cout<<array[i]<<endl;	
}