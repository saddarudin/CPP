#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
//	sadar.txt
string s1,s2;
  ifstream sadar1("saddar.txt");
  cout<<"Enter Your Name:";
  getline(cin,s2);
  while(sadar1.good())
  {
  	getline(sadar1,s1);
  	if(s2==s1)
	{  
  	cout<<"yes\n"<<s1;
	break;
    } 
	
  }
   if(s2!=s1)
   {
  
	  cout<<"no";
	}
	  return 0;
}