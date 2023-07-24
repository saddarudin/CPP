/*Task#2Write a code that opens the file in read mode created in task# 1, and read that file line by line.*/
#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
int main()
{
	string s;
	ifstream file("filling.txt", ios::in);    //Opening file for reading it
while(getline(file,s))   //reading file
{
	cout<<s<<endl;
}  
	file.close();   //Closing the file
	return 0;
}