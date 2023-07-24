#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	char ch;
	string s;
	for(int i=0; ; i++)
	{
		ch=getche();
		if(ch=='\r')break;
		s+=ch;
	}
	cout<<s;
	return 0;
}