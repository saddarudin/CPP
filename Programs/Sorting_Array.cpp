/*Write a program using array that asks user to input any 10 numbers; 
the program then sorts the numbers in descending order and displays the sorted number*/


#include<iostream>
using namespace std;
int main()
{
	int num[10];
	for(int i=0; i<10; i++)
	{
		cout<<"Enter number "<<i+1<<":";
		cin>>num[i];
	}
	
	
	
	
	for(int i=0; i<9; i++)
	{
		for(int j=i+1; j<10; j++)
		{
			if(num[i]<num[j])
			{
				int temp=num[i];
				num[i]=num[j];
				num[j]=temp;
			}
		}
	}


cout<<endl;
for(int i=0; i<10; i++)
cout<<num[i]<<endl;
}