#include<iostream>
using namespace std;
class Employee
{
	private:
		int empNo;
		float empSalary;
	public:
		Employee()
		{
			empNo = 0;
			empSalary = 0;
		}
		void setValue(int x, float y)
		{
			empNo = x;
			empSalary = y;
		}
		void Display()
		{
			cout<<"\nEmployee number is: "<<empNo;
			cout<<"\nEmployee Salary is: "<<empSalary;
		}
};
int main()
{
	Employee e1,e2,e3;
	int a,b,c;
	float x,y,z;
	cout<<"Enter employee number: ";
	cin>>a;
	cout<<"Enter employee Salary: ";
	cin>>x;
	e1.setValue(a,x);
	cout<<"Enter employee number: ";
	cin>>b;
	cout<<"Enter employee Salary: ";
	cin>>y;
	e2.setValue(b,y);
	cout<<"Enter employee number: ";
	cin>>c;
	cout<<"Enter employee Salary: ";
	cin>>z;
	e3.setValue(c,z);
	e1.Display();
	e2.Display();
	e3.Display();
	return 0;	
}