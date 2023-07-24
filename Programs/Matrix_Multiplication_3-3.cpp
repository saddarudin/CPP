#include<iostream>
using namespace std;
int matrix(int A[3][3], int B[3][3], int C[3][3]={0})
{
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		for(int k=0; k<3; k++)
		C[i][j]+=A[i][k]*B[k][j];
	}
	return C[3][3];
}
int main()
{
	int A[3][3];
	int B[3][3];
	int C[3][3]={0};
	cout<<"Enter elements for first matrix: ";
	for(int i=0; i<3; i++)
	for(int j=0; j<3; j++)
	cin>>A[i][j];
	cout<<"\n\n\n";
	cout<<"Enter elements for second matrix: ";
	for(int i=0; i<3; i++)
	for(int j=0; j<3; j++)
	cin>>B[i][j];	
	system("cls");
	cout<<"\n\n\t\tFirst matrix is: \n\n";
	for(int i=0; i<3; i++)
	{
		cout<<char(221);
		for(int j=0; j<3; j++)
		cout<<A[i][j]<<"\t";
		cout<<char(221)<<endl;
	}
    cout<<"\n\n\t\tSecond Matrix is: \n\n";   
	for(int i=0; i<3; i++)
	{
		cout<<char(221);
		for(int j=0; j<3; j++)
		cout<<B[i][j]<<"\t";
		cout<<char(221)<<endl;
	}
	matrix(A,B,C);	
	cout<<"\n\n\t\tResultant Matrix is: \n\n";   
	for(int i=0; i<3; i++)
	{
		cout<<char(221);
		for(int j=0; j<3; j++)
		cout<<C[i][j]<<"\t";
		cout<<char(221)<<endl;
	}
	
}