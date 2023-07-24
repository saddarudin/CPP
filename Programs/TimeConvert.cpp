/*Write a program that takes time in hours, minutes and seconds from the user, 
convert the time into seconds using function. The function takes hours,
minutes and seconds as argument and returns the time in second*/
#include<iostream>
using namespace std;
int time(int sec, int min, int hour);
int main()
{
	int min, sec, hour;
	cout<<"Enter hours: ";
	cin>>hour;
	cout<<"Enter minutes: ";
	cin>>min;
	cout<<"Enter seconds: ";
	cin>>sec;
	cout<<"Equivalent time in seconds is: "<<time(sec,min,hour);	
}
int time(int sec, int min, int hour)
{
	return(sec+min*60+hour*3600);
}