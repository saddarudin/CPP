#include<iostream>
using namespace std;
class Student{
private: 
	  string rollno;
public:
	int setRollNo(string roll){
			rollno=roll;
		}
	string getrollno(){
		return rollno;
	}	
};
int main(){
	Student s1;
	s1.setRollNo("21SW077");
	s1.getrollno();
	cout<<"Your Roll Number is "<<s1.getrollno();
}