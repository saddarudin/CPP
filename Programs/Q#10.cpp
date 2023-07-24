/*10.	 C++ Program using structure to Store Information of 10 employees in a Structure array.
( Note: Declare at least four structure members of your own choice. Possible structure members can be Empno, Empname, etc.)
*/
#include<iostream>
using namespace std;
struct employee
{
	int employeeNo;
	string employeeName;
	string department;
	string subject;
};
int main()
{
	employee emp[10];
	emp[0]={1,"MR. Sajjad","SW","PF Practical"};
	emp[1]={2,"Mr. Naeem","SW","PF Theory"};
	emp[2]={3,"Mr. Saleem","SW","AC"};
	emp[3]={4,"Eng. Noor Nabi Shaikh","SW","AP"};
	emp[4]={5,"Ms. Anoud","SW","IICT Theory"};
	emp[5]={6,"Mr. Asadullah","SW","IICT Practical"};
	emp[6]={7,"Ms. Um E Rubab","SW","FE"};
	emp[7]={8,"Mr. Tauha Hussain","CE","Basics of CE"};
	emp[8]={9,"Mr. Tulja Ram","CS","AC"};
	emp[9]={10,"Eng. Shafqat Hussain","EL","LCA"};
	for(int i=0;i<9;i++)
	{
		
	}
	for(int i=0;i<10;i++)
	{
		cout<<"Employee Number: "<<emp[i].employeeNo<<"\n";
		cout<<"\tName: "<<emp[i].employeeName<<endl<<endl;
		cout<<"\tDepartment: "<<emp[i].department<<endl<<endl;
		cout<<"\tSubject: "<<emp[i].subject<<endl<<endl;
	}
	return 0;
}