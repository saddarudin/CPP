#include<iostream>
using namespace std;
int& setx();
int x;
int& setx(){
	return x;
}
int main(){
	setx()=85;
	cout<<"x="<<x;
}
