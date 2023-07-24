#include<iostream>
using namespace std;
int main()
{
	int first=0,second=1,next=0;
	cout<<first<<" "<<second<<" ";
	for(int x=1;x<=10;x++)
	{
		next=first+second;
		cout<<next<<" ";
		first=second;
		second=next;
	}
}
