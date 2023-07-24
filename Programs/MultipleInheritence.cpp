#include<iostream>
using namespace std;
class Mother
{
	protected:
		string name;
	public:
		void setName()
		{
			cout<<"Enter name of your son: ";
			getline(cin,name);
		}
};

class Father
{
	protected:
		int age;
	public:
		void setage()
		{
			cout<<"Enter age of your son: ";
			cin>>age;
		}
};


class Son: public Mother, public Father
{
	public:
		string getName()
		{
			return name;
		}
		int getage()
		{
			return age;
		}
		void display()
		{
			cout<<"\n\t\t\tHi!";
			cout<<"\nI am "<<name<<endl;
			cout<<"\nMy age is: "<<age;
		}
};

int main()
{
	Son S;
	S.setName();
	S.getName();
	S.setage();
	S.getage();
	S.display();
	return 0;
}