#include<iostream>
using namespace std;

class Operator
{
	private:
		int x;
	public:
		Operator()
		{
			x=0;
		}
		void SetX(int a)
		{
			x=a;
		}
		int getX()
		{
			return x;
		}
		void operator ++()
		{
			++x;
		}
		
};

int main()
{
	Operator obj1;
	obj1.SetX(5);
	obj1.getX();
	++obj1;
	cout<<obj1.getX();
}