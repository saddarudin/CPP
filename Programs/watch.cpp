/*
1. Stop watch must be a duration of 5 minutes.
2. After first iteration of 30 seocnds, a five pointed star will appear.
3. For second iteration of 30 seconds, a six pointed star will appear, the increment continues for each iteration.
4. Add different colors to the stars
*/






#include<iostream>
#include <chrono>
#include <thread>
#include<windows.h>

using namespace std;

void setColor(int colorCode){
	HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(consoleHandle, colorCode);	
}

void draw_star(int points, int colorCode){
	cout<<"\n\n\n\t\t";
	setColor(colorCode);
	for(int i=0; i<points; i++)cout<<" * ";
		
	
}

void display_title(){
	cout<<"\t\t*** STOP WATCH ***\n";
	cout<<"\n\t\tMins\tseconds";
	cout<<"\n\tTime:\t";
}
int main(){
	int points = 3;
	int count=0;
	int colorCode = 1;
	for(int j=4; j>=0; j--){
		display_title();
		cout<<"  "<<j+1<<"\t00";
		this_thread::sleep_for(chrono::seconds(1));	
		system("cls");
		++points;	
		++colorCode;
		for(int i=59; i>0; i--){
			if(count>0){
				display_title();	
				cout<<"  "<<j<<"\t  "<<i--;	
				draw_star(points,colorCode);
				this_thread::sleep_for(chrono::seconds(1));	
				system("cls");
			}				
			if(i == 30 ){
				display_title();	
				cout<<"  "<<j<<"\t  "<<i--;	
				draw_star(++points,++colorCode);
				this_thread::sleep_for(chrono::seconds(1));	
				system("cls");
				count++;
			}

			display_title();
			cout<<"  "<<j<<"\t  "<<i;
			if(count>0)draw_star(points,colorCode);
			this_thread::sleep_for(chrono::seconds(1));
			system("cls");
			}
		}
		
	cout<<"\t\tSTOP!!!\n\t\tTime Over!";
	}
