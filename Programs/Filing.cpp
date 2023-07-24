#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
int main()
{
//	sadar.txt
  string s1,s2;
  ifstream sadar("sss.txt" );
  cout<<"Enter : ";
  cin>>s1;
//  sadar<<s1;
//  sadar2<<s1<<" ";
//cout<<"Enter any name: ";
//  getline(cin,s2);
  while(sadar.good())
  {
  	getline(sadar,s2);
  	if(s1==s2)
	{  int x,y;
	ofstream sdb("iob.txt", ios::app);
	
	
  	cout<<"Enter amount to add: ";
  	cin>>x;
  	sdb<<s1<<x;
	break;
    } 
	
	}
   if(s1!=s2)
   {
  
	  cout<<"no";
	}
	  return 0;
}