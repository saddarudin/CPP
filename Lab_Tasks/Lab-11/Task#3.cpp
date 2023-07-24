/*Task#3Consider the below Picture. Using OOP implement the following class Hierarchy programmatically. 
*/
#include<iostream>
using namespace std;
class Product
{
	protected:
		string name;
		string description;
		float price;
	public:
		Product()
		{
			price = 0;
		}
		void setprice()
		{
			float Price;
			cout<<"Enter price: ";
			cin>>Price;
			Price=price;
		}
};
class Medicine:public Product
{
	private:
		string MGTdate;
		string Expdate;
	public:
		void setMGTdate()
		{
			cout<<"Enter MGT Date: ";
			getline(cin,MGTdate);
		}
		void setExpDate()
		{
			cout<<"Enter Expiry date: ";
			getline(cin,Expdate);
		}	
};
class Book:public Product
{
	protected:
		string author;
		string Edition;
	public:
		void setauthor(string Author)
		{
			author=Author;
		}
};
int main()
{
	Product P1;
	Medicine M1;
	Book B1;
	B1.setauthor("Robert Lafore");
	B1.setprice();
	return 0;
}