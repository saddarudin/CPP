#include<iostream>
using namespace std;
int size = 3;
void Array(int A[3][3], int B[3][3], int C[3][3])
{
	for(int i=0; i<3; i++)
	for(int j=0; j<3; j++)
	for(int k=0; k<3; k++)
	C[i][j]+=A[i][k]*B[k][j];
}

int main()
{	
	int A[3][3]={{1,2,3},{4,5,6},{0,4,9}};
	int B[3][3]={{0,1,4},{4,5,8},{8,4,2}};
	int C[3][3]={{0,0,0},{0,0,0},{0,0,0}};
	Array(A,B,C);
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		cout<<C[i][j]<<"\t";
		cout<<endl;
	}
	return 0;
} 