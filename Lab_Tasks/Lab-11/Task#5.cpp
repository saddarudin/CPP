/*Task#5 Consider the below Picture. Using OOP implement the following class Hierarchy programmatically.*/
#include<iostream>
using namespace std;
class Person
{
	protected:
		string name;
	public:
		Person()
		{
			name="John";
		}
		void setname(string newname)
		{
			name=newname;			
		}
		string getname()
		{
		   	return name;                  
 		}
};
class Student : public Person
{
	private:
	    string Rollno;
	protected:
	    string technology;
	public:
	    void setrollno(string rollno)
		{
			Rollno=rollno;
		}
		void setDepart(string tech)
		{
			technology=tech;
		}
		void display()
		{
			cout<<"\nRoll Number = "<<Rollno;
			cout<<"\nDepartment = "<<technology;
		}     
};
class Employee : public Person
{
	private:
		string employeeNo;
	protected:
	    string desig;
	    double salary;
	public:
		void setdesig(string depart)
		{
			desig=depart;
		}
		void setSalary()
		{
			float Salary;
			cout<<"Enter salary: ";
			cin>>Salary;
			salary=Salary;
		}
};
int main()
{
	string naam;
	Person P1;
	Student S1;
	Employee E1;
	cout<<"Enter name: ";
	getline(cin,naam);
	P1.setname(naam);
	P1.getname();
	S1.setrollno("21SW077");
	S1.setDepart("Software");
	S1.display();
	return 0;
}
