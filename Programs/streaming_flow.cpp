#include<iostream>
#include<unistd.h>
using namespace std;
int i=0;
int a=0;
string s;
int main(){
	char source[]="This program is for the students of fundamentals of programming students for BSSE Final Evaluation";
	int size=sizeof(source);
    while(i<size){
    	if(i>25){
    	a++;
        system("cls");
        cout<<"\t\t\t\t";
        usleep(100);
		for(int j=a;j<i;j++)cout<<source[j];
			sleep(1);
			cout<<source[i];
		
		}
    	else cout<<source[i];
    	i++;
	}
}