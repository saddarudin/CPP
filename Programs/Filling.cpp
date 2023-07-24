#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
int main()
{
//	sadar.txt
  string s1,s2;
  ifstream sadar("bal.txt");
  cout<<"Enter Your Name:";
  getline(cin,s1);
//  sadar2<<s1<<" ";
//cout<<"Enter any name: ";
//  getline(cin,s2);
  while(sadar.good())
  {
  	getline(sadar,s2);
  	if(s1==s2)
	{  
  	cout<<"yes\n";
	break;
    } 
	
	}
   if(s1!=s2)
   {
  
	  cout<<"no";
	}
	  return 0;
}