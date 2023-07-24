#include<iostream>
using namespace std;
int main(){
	int weeks,days;
	cout<<"Enter number of weeks: ";
	cin>>weeks;
	cout<<"Enter number of days in a week: ";
	cin>>days;
	for(int i=1;i<=weeks;i++){
		cout<<"Week "<<i<<" : \n";
		for(int j=1;j<=days;j++)cout<<"\tDay "<<j<<"\n";
		cout<<endl;
	}
}