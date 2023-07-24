/*Task#1 Write a C++ program using operator overloading 
that will multiply two user defined objects 
(Use C++ Arithmetic operator (*) to accomplish the task.)*/

#include<iostream>
using namespace std;
class Multi
{
	int n;
	public:
		Multi()
		{
			n=0;
		}
        void getvalue()
        {
        	cin>>n;
		}
		Multi operator *(Multi obj)
		{
			Multi temp;
			temp.n=n*obj.n;
			return temp;
		}
		int display()
		{
			return n;
		}
		
};
int main()
{
	Multi m1,m2,m3;
	
	cout<<"Enter value of object 1: ";
    m1.getvalue();
	cout<<"\nEnter value of object 2 : ";
	m2.getvalue();
	m3=m1*m2;
	cout<<"\nMultiplication = "<<m3.display();
	return 0;
}