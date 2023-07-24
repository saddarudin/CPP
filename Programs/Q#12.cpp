/*12.	Write a program using OOP (Polymorphism Overloading) 
to concatenate one string to another string using binary + operator overloading.*/
#include<iostream>
using namespace std;
class String
{
	private:
		char str[20];
	public:
		void read()
		{
			cout<<"Enter a string: ";
			cin>>str;
		}
		void print()
		{
			cout<<"String is: "<<str<<endl;
		}
		String operator +(String X)
		{
			String t;
			strcpy(t.str,str);
			strcat(t.str,X.str);
			return t;
		}
};
int main()
{
	String s1,s2,s3;
	s1.read();
	s2.read();	
	s3=s1+s2;
	s3.print();
	return 0;
}