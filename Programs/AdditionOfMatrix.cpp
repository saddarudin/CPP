#include<iostream>
using namespace std;
void Array(int x[3][3],int y[3][3], int z[3][3])
{
	for(int i=0; i<3; i++)
	for(int j=0; j<3; j++)
	for(int k=0; k<3; k++)
	z[j][k]=x[j][k]+y[j][k];
	for(int a=0; a<3; a++)
	{
		for(int b=0; b<3; b++)
	    cout<<z[a][b]<<"\t";
		cout<<endl;	    
	}
	
}
int main()
{
	int A[3][3]={{1,2,3},{5,7,-3},{0,14,0}};
	int B[3][3]={{2,4,5},{4,7,1},{0,5,9}};
	int C[3][3]={{0,0,0},{0,0,0},{0,0,0}};
	Array(A,B,C);
	
}