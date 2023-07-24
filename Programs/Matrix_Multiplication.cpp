#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	cout<<"Enter number of rows for first matrix (m1): ";
	int m1=0;
	cin>>m1;
	cout<<"\nEnter number of colomns for first matrix(n1): ";
	int n1=0;
	cin>>n1;
	cout<<"\nEnter number of rows for second matrix(m2): ";
	int m2=0;
	cin>>m2;
	cout<<"\nEnter number of columns for second matrix(n2): ";
	int n2=0;
	cin>>n2;
	while(n1!=m2)
	{
		cout<<"\nMatrix multiplication is not possible: ";
		cout<<"\nPress any key to try again :";
		getch();
		system("cls");
		main();
	}
	int A[m1][n1];
	int B[m2][n2];
	int C[m1][n2];
	cout<<"\nEnter elements for first matrix (row wise) (press enter after each value): ";
	for(int a=0; a<m1; a++)
	for(int b=0; b<n1; b++)
	{
		cin>>A[a][b];
	}
	cout<<"\n\nEnter elements for second matrix (row wise) (press enter after each value): \n";
    for(int c=0; c<m2; c++)
	for(int d=0; d<n2; d++)
	{
		cin>>B[c][d];
	}
	for(int e=0; e<m1; e++)
	for(int f=0; f<n2; f++)
	for(int g=0; g<m2; g++)
	C[e][f]+=A[f][g]*B[g][f];
	system("cls");
	cout<<"\n_______________________________________\n";
	cout<<"\nFirst Matrix is: \n\n";
	for(int h=0; h<m1; h++)
	{
		cout<<char(221);
 	    for(int i=0; i<n1; i++)
	    cout<<" "<<A[h][i]<<"  ";
	    cout<<char(221)<<endl;
    }
	cout<<"\nSecond Matrix is: \n\n";
	for(int j=0; j<m2; j++)
	{
		cout<<char(221);
 	    for(int k=0; k<n2; k++)
	    cout<<" "<<B[j][k]<<"  ";
	    cout<<char(221)<<endl;
    }
    cout<<"\n_______________ Multiplication ________________________\n";
	for(int l=0; l<m1; l++)
	{
		cout<<char(221);
		for(int m=0; m<n2; m++)
		cout<<" "<<C[l][m]<<"  ";
		cout<<char(221)<<endl;
	}

return 0;
}