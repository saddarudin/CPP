#include<iostream>
using namespace std;
class Overload
{
	private:
		int count;
	public:
		Overload()
		{
			count=0;
		}
		int getvalue()
		{
			return count;
		}
		void operator ++()
		{
			++count;
		}
		void operator ++(int)
		{
			count++;
		}
};

int main()
{
	Overload o;
	cout<<o.getvalue();
	++o;
	cout<<endl<<o.getvalue();
	o++;
	cout<<o.getvalue();
}