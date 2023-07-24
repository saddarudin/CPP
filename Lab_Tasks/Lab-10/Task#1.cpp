/*Task # 1 Create a class having 4 functions, add, sub, mul and div.
Each function accepts 2 parameters and returns the sum, difference,
multiplication and division of these numbers
Create a main class having main function that uses the above class.
*/
#include<iostream>
using namespace std;
class Operators
{
	public:
		void add(int a, int b)
		{
			cout<<"\n\nSum = "<<a+b;
		}
		void sub(int a, int b)
		{
			cout<<"\n\nDifference = "<<a-b;
		}
		void mul(int a, int b)
		{
			cout<<"\n\nMultiplication = "<<a*b;
		}
		void div(int a, int b)
		{
			cout<<"\n\nDivision = "<<(float)a/b;
		}
};
int main()
{
	Operators O;
	int x,y;
	cout<<"Enter number 1: ";
	cin>>x;
	cout<<"\nEnter number 2: ";
	cin>>y;
	O.add(x,y);
	O.sub(x,y);
	O.mul(x,y);
	O.div(x,y);
	return 0;
}