#include<iostream>
using namespace std;
int main()
{
	int A[3][3];
	int B[3][3];
	cout<<"Enter values for matrix A: "<<endl;
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
	    cin>>A[i][j];
	}
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		B[i][j]=A[j][i];	
	}
	system("cls");
	cout<<"\n\nDisplay:";
	cout<<"\nMatrix A is: "<<endl;
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		cout<<A[i][j]<<"  ";
		cout<<endl;
	}
	cout<<"\n\nTranspose of Matrix A is: "<<endl;
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		cout<<B[i][j]<<"  ";
		cout<<endl;
	}
	
	
}