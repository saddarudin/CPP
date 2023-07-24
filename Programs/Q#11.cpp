/*11.	Write a program using Object Oriented Programming concepts to 
calculate bonus of the employees’ admin and salesman. 
The admin and salesman classes derives the information from class person. 
Create base and all derived classes having same member functions called getdata, 
display data and bonus. Calculates bonus of the specified employee.*/
#include<iostream>
using namespace std;
class Person
{
	public:
		float salary;
		float bonus;
		int grade;
	Person()
	{
		salary=0.0F;
		bonus=0.0F;
		grade=0;
	}
};
class Admin: public Person
{
	public:
		float pay;
		void showdata()
		{
			cout<<"Enter salary of Admin: ";
			cin>>pay;
			cout<<"Enter Grade: ";
			cin>>grade;
			if(grade>=17)
			{
				bonus=pay*60/100;
			}
			else
			bonus=pay*30/100;
		}
		void getdata()
		{
			cout<<"Bonus of Admin is: "<<bonus;
		}
};
class Salesman : public Person
{
	public:
	float pay1;
		void showdata()
		{
			cout<<"Enter salary of Salesman: ";
			cin>>pay1;
			cout<<"Enter Grade: ";
			cin>>grade;
			if(grade>=17)
			{
				bonus=pay1*60/100;
			}
			else
			bonus=pay1*30/100;
		}
		void getdata()
		{
			cout<<"Bonus of Salesman is: "<<bonus;
		}
};
int main()
{
	Admin A;
	Salesman S;
	A.showdata();
	A.getdata();
	cout<<"\n\n";
    S.showdata();
    S.getdata();
}