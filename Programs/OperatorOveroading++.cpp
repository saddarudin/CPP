#include<iostream>
using namespace std;
class Operator
{
	private:
		int y;
	public:
		Operator()
		{
			y=0;
		}
		void SetY(int b)
		{
			y=b;
		}
		int getY()
		{
			return y;
		}
		Operator operator ++(int)
		{
			Operator o;
			o.y=y++;
			return o;
		}
		
};
int main()
{
	Operator O;
	O.SetY(8);
	O.getY();
	O++;
	cout<<"Post increment: "<<O.getY();
}