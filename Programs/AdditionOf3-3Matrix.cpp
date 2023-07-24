#include<iostream>
using namespace std;
void matrix(int A[3][3], int B[3][3],int C[3][3])
{
	for(int i=0; i<3; i++)
	for(int j=0; j<3; j++)
	C[i][j]=A[i][j]+B[i][j];
	cout<<"\n\n\t\t\tAddition Matrix is: \n\n";
	for(int i=0; i<3; i++)
	{
		cout<<char(221);
		for(int j=0; j<3; j++)
		cout<<C[i][j]<<"\t";
		cout<<char(221)<<endl;
	}
}
int main()
{
	int A[3][3], B[3][3], C[3][3]={0};
	cout<<"Enter elements for first matrix: ";
	for(int i=0; i<3; i++)
	for(int j=0; j<3; j++)
	cin>>A[i][j];
	cout<<endl;
	cout<<"Enter elements for second matrix: ";
	for(int i=0; i<3; i++)
	for(int j=0; j<3; j++)
	cin>>B[i][j];
	matrix(A,B,C);
}