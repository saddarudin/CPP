#include<iostream>
using namespace std;

class Father
{
	protected:
		string s1;
	public:
		Father()
		{
			s1=" ";
		}
		void getname()
		{
			cout<<"Enter name of your son: ";
			getline(cin,s1);
		}
		string Name()
		{
			return s1;
		}
};

class Mother
{
	protected:
		int x;
	public:
		Mother()
		{
			x=0;
		}
		void getage()
		{
			cout<<"Enter age of your son: ";
			cin>>x;
		}
		int Age()
		{
			return x;
		}
};

class Son : public Mother, public Father
{
	public:
		void get()
		{
			cout<<"My name is: "<<s1;
			cout<<"\nMy age is: "<<x;
		}
};

int main()
{
	Son S;
	S.getname();
	S.Name();
	S.getage();
	S.Age();
	S.get();
	
}