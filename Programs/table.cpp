#include<iostream>
using namespace std;
class Table{

public:
//	int no;
	
	void get(int n){
		for(int i=1;i<=10;i++){
			cout<<n<<"*"<<i<<"="<<n*i<<endl;
		}}
	};
	 
int main(){
	Table t1;
	int no;
	cout<<"Enter the no ";
	cin>>no;
	t1.get(no);
}