#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	float x,y;
	char ch;
	highvideo();
	cputs("Saddar");
	cout<<"Enter number 1 :";
	cin>>x;
	if(x==ch){cout<<"Error! You Entered Character";
	}
	cout<<"Enter any operation :";
	cin>>ch;
	cout<<"Enter number 2 :";
	cin>>y;
	if(y==ch){cout<<"Error! You Entered Character"; 
	}
	if(ch=='+'){cout<<x<<ch<<y<<"="<<x+y;
	} 
	if(ch=='-'){cout<<x<<ch<<y<<"="<<x-y;
	}
	if(ch=='*'){cout<<x<<ch<<y<<"="<<x*y;
	}
	if(ch=='/'){cout<<x<<ch<<y<<"="<<x/y;
	}
	
	else
	{cout<<"Invalid operation";
	
	}
	
	return 0;
	
	
}
