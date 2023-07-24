/*Task # 3 Create an employee class.
The member should comprise an int for storing the employee number,
and float for the employee’s salary.
Member functions should allow the user to enter
this data and display it. Write a main() function
that allows the user to enter data for three employees and display it.
*/
#include<iostream>
using namespace std;
class Employee
{
	private:
		int employeeNo;
		float Salary;
	public:
    
        Employee()
        {
        	employeeNo=0;
        	Salary=0;
		}
		void setdata()
		{
			cout<<"\n\nEnter employee number: ";
			cin>>employeeNo;
			cout<<"\n\nEnter Employee Salary: ";
			cin>>Salary;
			cout<<endl; 
		}
		void display()
		{
			cout<<"\nEmployee number is : "<<employeeNo<<endl;
			cout<<"\nEmployee Salary is : "<<Salary<<endl;
		}
};
int main()
{	
	Employee e1,e2,e3;
	e1.setdata();
	e2.setdata();
	e3.setdata();
	cout<<"\n\n\nDetails of first employee are: ";
	e1.display();
	cout<<"\n\n\nDetails of second employee are: ";
	e2.display();
	cout<<"\n\n\nDetails of third employee are: ";
	e3.display();
	return 0;
}