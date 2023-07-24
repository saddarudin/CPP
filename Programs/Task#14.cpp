/*14.	
A company has following details of their employees in the file 'emp.txt'  
a. Emp Id
b. Emp Name
c. Emp Address
d. Emp Dept (Admin/Sales/Production/IT)
e. Emp Phone
f. Emp Age

Write a C++ program to read the above file.
Create new file such as Adm.txt, Sal.txt, Pro.txt, IT.txt respectively 
to store the employee details according to their department.
*/
#include<iostream>
#include<fstream>
#include<string.h>
#include<conio.h>
using namespace std;
void employee()
{
	ofstream empl("emp.txt" );
	empl<<"ID = 01"<<endl;
	empl<<"Name = Mr.Sajjad"<<endl;
	empl<<"Address = Latif Abad Unit 5 Hyderabad"<<endl;
	empl<<"Designation = Teacher"<<endl;
	empl<<"Phone = 03480331849 "<<endl;
	empl<<"Age = 65 years"<<endl;
	ifstream read("emp.txt");
	string str;
	while(getline(read,str))
	{
		cout<<str<<endl;
	}
	read.close();
};
void admin()
{
	cout<<"\n\t\t\tADMIN BLOCK\n";
	string id;
	string name;
	string address;
    string phone;
    string age;;

	ofstream admin("Adm.txt" , ios::app);
	cout<<"Enter Id: ";
	getline(cin,id);
	cout<<"Enter name: ";
	getline(cin,name);
	cout<<"Enter address: ";
	getline(cin,address);
	cout<<"Enter mobile numebr: ";
	getline(cin,phone);
	cout<<"Enter age: ";
	getline(cin,age);
	admin<<id<<endl<<name<<endl<<address<<endl<<phone<<endl<<age<<endl;
};
void salesman()
{
	cout<<"\n\t\t\tSALESMAN\n";
	string id;
	string name;
	string address;
    string phone;
    string age;;

	ofstream salesman("Sal.txt" , ios::app);
	cout<<"Enter Id: ";
	getline(cin,id);
	cout<<"Enter name: ";
	getline(cin,name);
	cout<<"Enter address: ";
	getline(cin,address);
	cout<<"Enter mobile numebr: ";
	getline(cin,phone);
	cout<<"Enter age: ";
	getline(cin,age);
	salesman<<id<<endl<<name<<endl<<address<<endl<<phone<<endl<<age<<endl;
};
void production()
{
	cout<<"\n\t\t\tProduction\n";
	string id;
	string name;
	string address;
    string phone;
    string age;;

	ofstream prod("Pro.txt" , ios::app);
	cout<<"Enter Id: ";
	getline(cin,id);
	cout<<"Enter name: ";
	getline(cin,name);
	cout<<"Enter address: ";
	getline(cin,address);
	cout<<"Enter mobile numebr: ";
	getline(cin,phone);
	cout<<"Enter age: ";
	getline(cin,age);
	prod<<id<<endl<<name<<endl<<address<<endl<<phone<<endl<<age<<endl;
}
int main()
{
	employee();
	cout<<"\n\nPress any key";
	getch();
	system("cls");	
	admin();
return 0;    
}