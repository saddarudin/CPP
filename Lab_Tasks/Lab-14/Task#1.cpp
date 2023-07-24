/*
Task # 1
Write a program that opens a file in write mode, write few sentences in the file and closes the file.
(Note use comments to write down the steps for reading or writing a file such 
1) to open the file 
2) to read or write the data from/to the file 
3) to close the file
*/
#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
int main()
{
	string s;
	ofstream file("filling.txt");   // opening file to write data to the file
	file<<"Hello! This is Saddar U Din Babar.";           //writing to file
	file<<"\nThis is myfirst program on filling\n";
	file.close();   //Closing the file
	cout<<"Filling has been done.";
	return 0;
}