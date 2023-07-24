/*Task # 4 Create a class that includes a data member
that holds a “Serial number” for each object created 
from the class. That is, the first object created will
be numbered 1, the second 2, and so on.
*/
#include<iostream>
using namespace std;
class Object
{
	private:
	    static int x;
		int serialno;	
	public:
		Object()
		{
			serialno=++x;
		}
		void tellNo()
		{
			cout<<"\n\nI am object number: "<<serialno;			
		}				
};
int Object :: x=0;
int main()
{
	Object o1,o2,o3,o4;
	o1.tellNo();
	o2.tellNo();
	o3.tellNo();
	o4.tellNo();
	return 0;
}