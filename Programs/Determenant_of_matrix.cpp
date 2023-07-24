#include<iostream>
using namespace std;
int main()
{
	int A[3][3];
	cout<<"Enter values of matrix A: ";
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		cin>>A[i][j];
	}
	int a=A[0][0]*(A[1][1]*A[2][2]-A[1][2]*A[2][1])-
	      A[0][1]*(A[1][0]*A[2][2]-A[1][2]*A[2][0])+
	      A[0][2]*(A[1][0]*A[2][1]-A[1][1]*A[2][0]);
	      cout<<"\n\nDeterminant of A is: "<<a;
}