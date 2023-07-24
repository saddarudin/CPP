#include<iostream>
#include<iomanip>
using namespace std;
void sum();
void multiply();
    float A[10][10];
	float B[10][10];
	float C[10][10];
	int i,j,k;
	int x,y,z,t;
	char ch,ch1;	
	
int main()
{
	cout<<"Enter Operation(+ - *):";
	cin>>ch1;
	cout<<"Enter order of matrix A: (for example: 3*2)";
	cin>>x>>ch>>y;
	cout<<"Enter order of matrix B: ";
	cin>>z>>ch>>t;
	if(ch1 == '+' || ch1 == '-')
	{
		if(x == z && y == t)
		sum();
		else cout<<"Not PPossible";
	}
	else if(ch1 == '*')
	{
		if(y == z)
		multiply();
		else cout<<"Not Possible";
	}
	else 
	{
		cout<<"Incorrect Credentials!!";
		main();
	}
	
		
}
	

void sum()
{
	cout<<"Enter values for matrix A: ";
	for(i=0; i<x; i++)
	for(j=0; j<y; j++)		
	cin>>A[i][j];
	cout<<"\nEnter values for matrix B: ";
	for(i=0; i<z; i++)
	for(j=0; j<t; j++)
	cin>>B[i][j];
	system("cls");
	if(ch1 == '+')
	{
		cout<<"Resultant Matrix (A+B) is: \n\n";
		for(i=0; i<x; i++)
		for(j=0; j<y; j++)
		C[i][j] = A[i][j]+B[i][j];
	}
	else if(ch1 == '-')
	{
		cout<<"Resultant Matrix (A-B) is: \n\n";
		for(i=0; i<x; i++)
		for(j=0; j<y; j++)
		C[i][j] = A[i][j]-B[i][j];
	}	
		for(i=0; i<x; i++)
		{
			for(j=0; j<y; j++)
			cout<<setw(8)<<C[i][j];
			cout<<endl;
		}	
};
void multiply()
{
	cout<<"Enter values for matrix A: ";
	for(i=0; i<x; i++)
	for(j=0; j<y; j++)		
	cin>>A[i][j];
	cout<<"\nEnter values for matrix B: ";
	for(i=0; i<z; i++)
	for(j=0; j<t; j++)
	cin>>B[i][j];
	for(i=0; i<x; i++)
	{
		for(j=0; j<t; j++)
		{
			for(k=0; k<y; k++)
			C[i][j]+=A[i][k]*B[k][j];
		}
	}
	system("cls");
	cout<<"Resultant Matrix (A*B) is: \n\n";
	for(i=0; i<x; i++)
		{
			for(j=0; j<t; j++)
			cout<<setw(8)<<C[i][j];
			cout<<endl;
		}
	
	
	
	
}