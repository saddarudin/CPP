#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    string x;
    char a;
    int l,count=0;
    cout<<"Enter your name: ";
    for(int y;;y++){
    	a=getch();
    	x+=a;
    	cout<<a;
    	l=++count;
    if(a==(int)13)
	    break;
	}
	cout<<endl;
	for(count=0;count<=l;count++){
		cout<<x[count]<<"\n";
	}
return 0;
}
