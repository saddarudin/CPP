#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	char ch;
	string pass;
	for(int i=0; ; i++)
	{
a:		ch=getch();
		if(ch=='\r')break;
		if(ch=='\b')
		{
			pass.erase(pass.end()-1);
			int i=pass.length();
			system("cls");
			for(int j=i; j>0; j--)
			cout<<"*";
			goto a;
		}
		cout<<"*";
		pass+=ch;
	}
	
	cout<<endl<<pass;
}