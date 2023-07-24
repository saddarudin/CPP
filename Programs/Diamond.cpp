#include<iostream>
using namespace std;
int main()
{
	for(int x=1;x<=6;x++){for(int a=5;a>=x;a--)cout<<" ";
	for(int y=1;y<=x;y++)
	cout<<(char)3<<" ";
	cout<<endl;
	}
	for(int x=6;x>=1;x--){
		for(int a=5;a>=x;a--)cout<<" ";
		for(int y=1;y<=x;y++)
		cout<<(char)3<<" ";
		cout<<endl;
	}
	
	
	
	return 0;
}
