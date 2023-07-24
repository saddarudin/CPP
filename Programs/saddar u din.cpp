#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
int main()
{
	string name,name2;
	cout<<"Enter any name: ";
	getline(cin,name);
	ofstream file("sadar.txt") ;
	file<<name;
//	file.close();
	cout<<"Enter name: ";
	getline(cin,name);	
//	file.open("sadar.txt");
	ios::ate;
	file<<name;
}