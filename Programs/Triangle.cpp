#include<iostream>
using namespace std;
int main()
{
	for(int i=1; i<5; i++)
	{
		for(int j=1; j<=i; j++)
		{
			if(i>2)
			{
				for(int k=i; k<6; k++)
				{
					if(i==k)
				    cout<<endl;
				    cout<<k<<" ";
				}
				
			}
			else
			{
			cout<<j<<" ";
		    if(i==j)
		    break;
			}
			
		}
		cout<<endl;
	}
}