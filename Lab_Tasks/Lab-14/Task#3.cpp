/*Task#3 Suppose you wanted to write code that reads from a file one word at a time. Write C++ code to accomplish this.*/
#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
int main()
{
	string s;
	ifstream file("filling.txt", ios::in);    //Opening file for reading it
while(file>>s)   //reading file
{
	cout<<s<<endl;
}  
	file.close();   //Closing the file
	return 0;
}