#include<iostream>
#include<conio.h>
#include<iomanip>
#include<cstring>

using namespace std;

class Easypaisa{
private:
	string password;
	string name; 
public:
	char ch;
	int x,date,month,year,counter=0;
	long long int nic;
	string username,pin;
	void title();
	void showdata();
	void newaccount();
	void setpass();
	void login();
	void callpass();
	void menu();
	void moneytransfer();
    void mobileload();
    void billpayment();
    void payments();

	
	
	
	
};


void Easypaisa :: title(){
    cout<<setw(45);
 for(int i=0;i<42;i++){cout<<(char)3;
 if(i==20)cout<<endl<<setw(45)<<(char)3<<" Easypaisa Service "<<(char)3<<endl<<setw(45);}
    cout<<endl; }


void Easypaisa :: showdata(){
	cout<<"\n\nPress:\n\n1.To create a new account\n\n2.If you already have an account"<<endl;
    cin>>x;
if(x==1){
	system("cls");
	newaccount();
	setpass();
	cout<<"\nWould you like to see your password?(y/n) \n";
	ch=getch();
 if(ch=='y'||ch=='Y'){cout<<"\nYou Entered: "<<password<<endl;}
label: cout<<"\n\nConfirm password: ";
callpass();
if(password==pin){
	cout<<"\n\nYou've created your account succesfully ....";
	cout<<endl<<"\nPress any key to log in: \n";
	getch();
	system("cls");
	login();}
else
	{system("cls");
	cout<<"Incorrect confirm password! Try Again\n";pin.erase(0,counter);goto label;}
	}
}



void Easypaisa :: newaccount(){
	cout<<"\n\t\t\t_________Creating New Account________\n\n";
	cout<<"Enter Your Name: \n";
    getline(cin,name);
	getline(cin,name); 
	cout<<"\nEnter your CNIC (without dashes): \n";
    cin>>nic;
    cout<<"\nEnter Date Of Birth (DD-MM-YY): \n";
	cin>>date>>ch>>month>>ch>>year;
	if(month<0||month>12){cout<<"\nIncorrect Month! ";newaccount();}
	if(year>2004){system("cls");
	cout<<"You're Ineligible!!! You are under 18!\n";newaccount();}
}


void Easypaisa :: setpass(){
	cout<<"\nEnter new pin: \n";
	for(int i=0;;i++){
	ch=getch();
	if(ch==(char)13)break;
	else if(ch==(char)8){password.erase(0,i+1);setpass();}
	else {
	password+=ch;
	cout<<"*";}
}
}
	
void Easypaisa :: callpass(){
    counter=0;
	for(int i=0;;i++){
	counter++;
    ch=getch();
    if(ch==(char)13)break;
    else if(ch==(int)8){pin.erase(0,counter+1);callpass();}
    else{
	pin+=ch;
    cout<<"*";}
	}	
}
	
	
void Easypaisa :: login(){
	cout<<"\n\t\t\t_____________Log In_______________\n\n";
	cout<<"Enter User Name:(You may have to enter the same name two times.) \n";
	getline(cin,username);
	getline(cin,username);
 if(username==name)
	{cout<<"\nEnter password: ";
	pin.erase(0,counter);
	callpass();
	if(password==pin){menu();}
  else  {system("cls");
	cout<<"Incorrect Password\n";
	login();}}
 else{
    cout<<"\nUsername does not exist!\n";
	login();
	}
}			


void Easypaisa :: menu(){
	system("cls");
    int choose;
    cout<<"\t\t\t\t\t******_____________Main Menu______________******\n\n";
	cout<<"Press: \n\n";
	cout<<"1.Money Transfer\n\n";
	cout<<"2.Mobile Load\n\n";
	cout<<"3.Bill Payment\n\n";
	cout<<"4.Payments\n\n";
	cout<<"5.My Account\n\n";
	cout<<"6.Exit\n\n";
	cin>>choose;
if(choose==1){moneytransfer();}
else if(choose==2){mobileload();}
else if(choose==3){billpayment();}
else if(choose==4){payments();}
else if(choose==5){}
else if(choose==6){exit(0);} 
}




void Easypaisa :: moneytransfer(){
	long int choose,amount;
	float rmno,nic,acno;
	system("cls");
	cout<<"Press:\n\n";
	cout<<"1.Mobile Account\n\n";
	cout<<"2.CNIC\n\n";
	cout<<"3.Bank Transfer\n\n";
	cout<<"4.Back\n\n";
	cin>>choose;
if(choose==1){
	system("cls");
cout<<"\n\t\t___________________Mobile Account______________\n\n";
cout<<"SELECT:\n\n";
cout<<"1.Easypaisa\n2.JAzzcash\n";
cin>>x;
system("cls");
cout<<"Enter receiver mobile number: ";
cin>>rmno;
cout<<"\nEnter amount: ";
cin>>amount;
cout<<"\nEnter password: ";
callpass();
}
else if(choose==2){
	system("cls");
cout<<"\n\t\t_________________CNIC_______________\n\n";
cout<<"Enter Receiver Mobile Number: ";
cin>>rmno;
cout<<"\nEnter receiver NIC number: ";
cin>>nic;
cout<<"\nEnter ammount: ";
cin>>amount;
cout<<"\nEnter Password: ";
callpass();
}
else if(choose==3){
	system("cls");
cout<<"\n\t\t_______________BANK Transfer_____________\n\n";
cout<<"SELECT BANK:\n";
cout<<"1.HBL\n2.MCB\n3.Bank Al Falah\n4.Bank Al Habib\n6.Allied Bank\n";
cin>>x;
system("cls");
cout<<"\nEnter account number: ";
cin>>acno;
cout<<"\nEnter receiver mobile number: ";
cin>>rmno;
cout<<"\nEnter receiver NIC number: ";
cin>>nic;
cout<<"\nEnter Password: ";
callpass();
}
else if(choose==4){menu();}

}




void Easypaisa :: mobileload(){
	system("cls");
	long int amount;
	double mno;
	cout<<"\nSELECT NETWORK\n";
	cout<<"\n\n1.Telenor\n\n2.Mobilink\n\n3.Ufone\n\n4.Warid\n\n5.Back to main menu\n\n";
	cin>>x;
	if(x==5){menu();}
	cout<<"\nEnter Mobile Number: ";
	cin>>mno;
	cout<<"\nEnter amount: ";
	cin>>amount;
	cout<<"\nEnter Password: ";
	callpass();
}



void Easypaisa :: billpayment(){
	system("cls");
	double conno;
	int a;
	cout<<"SELECT UTILITY BILLS: ";
	cout<<"\n\n1.Electricity\n\n2.Telephone\n\n3.Gas\n\n4.Internet\n\n5.Water\n\n6.Back\n\n";
	cin>>x;
    if(x==6){menu();} 
else if(x==1)a=5000;
else if(x==2)a=1000;
else if(x==3)a=2000;
else if(x==4)a=4000;
else if(x==5)a=500;
	cout<<"\nEnter consumer number: \n";
	cin>>conno;
	cout<<"\nYour bill amount is Rs."<<a<<" only.\n";
	cout<<"\nEnter Password to confirm\n";
	callpass();
}


void Easypaisa :: payments(){
	system("cls");
	cout<<"\nSELECT: \n\n";
	cout<<"\n\n1.Online Ticket Booking\n\n2.Traffic Challan\n\n3.Pay Fee \n\n4.Donation\n\n5.Back to main menu\n\n";
	cin>>x;
if(x==1){
	system("cls");
	cout<<"\n\t\t\t\t___________Online Ticket Booking_________\n\n";
	char ch;
	long long int cnic,number,day,month,year;
	string country1,country2,customer;
	cout<<"\nEnter passanger's name: \n";
	for(int i=0;;i++){
		ch=getch();
		if(ch==(int)13)break;
		cout<<ch;
		customer+=ch;}
		cout<<"\n\nEnter passanger's NIC number: \n";
		cin>>cnic;
		cout<<"\nEnter passanger's mobile number: \n";
		cin>>number;
		cout<<endl<<"Enter date (DD-MM-YY): "<<endl;
		cin>>day>>ch>>month>>ch>>year;
    cout<<"\nFrom (country name): \n";
for(int i=0;;i++){
	ch=getch();
	if(ch==(int)13)break;
	cout<<ch;
	country1+=ch;}
    cout<<"\n\nTo (country name): \n";
for(int i=0;;i++){
	ch=getch();
	if(ch==(int)13)break;
	cout<<ch;
	country2+=ch;}
	system("cls");
	cout<<"\n\t\t\t\t_________AIR TICKET________\n";
	cout<<"____________________________________________________________________";
	cout<<endl<<"Name of passanger: "<<customer<<endl;
	cout.setf(ios::fixed);cout<<endl<<"NIC Number: "<<cnic<<endl;
	cout.setf(ios::fixed);cout<<endl<<"Mobile Number: "<<number<<endl;
	cout<<endl<<"From: "<<country1<<endl;
	cout<<endl<<"To: "<<country2<<endl;
	cout<<endl<<"Date: "<<day<<"-"<<month<<"-"<<year<<endl;
	cout<<endl<<"Flight Name: ULON23"<<endl;
	cout<<endl<<"Boarding Time: 10:20 PM"<<endl;
	cout<<endl<<"Gate: 22"<<endl;
	cout<<endl<<"Seat: 21B"<<endl;
	cout<<endl<<"Price: 95600"<<endl; 
	cout<<endl<<"**Price will be deducted from your account."<<endl;
	cout<<endl<<"Enter Password to Confirm: ";
	callpass();

 }
 
else if(x==2){
	system("cls");
cout<<"\n\t\t\t________Traffic Challan__________\n\n";
cout<<endl<<"SELECT: ";
cout<<endl<<"1.Pay fine of Rs.500 for having no helmet.\n";
cout<<endl<<"2.Pay fine of Rs.200 for exceeding prescribed speed limit.\n";
cout<<endl<<"3.Pay fine of Rs.300 for carrying passangers exceeding permissible limit.\n";
cout<<endl<<"4.Pay fine of Rs.200 for violation of traffic signals.\n";
cout<<endl<<"5.Pay fine of Rs.300 for overloading a goods vehicle.\n";
cout<<endl<<"6.Pay fine of Rs.600 for driving a motor vehicle at night without proper lights.\n";
cout<<endl<<"7.Pay fine of Rs.400 for driving a motor vehicle without a driving licence.\n";
cin>>x;
cout<<"\nTo confirm please enter password: ";
callpass();

}
else if(x==3){
system("cls");
cout<<"\n\t\t\t_____________PAY FEE____________\n\n";
cout<<endl<<"SELECT: ";
cout<<"\n\n1.University\n\n2.College\n\n3.School\n\n";
cin>>x;
if(x==1){
	char ch;
	double a,voucher,other;
	string university;
	cout<<endl<<"Enter University Name: \n";
	for(int i=0;;i++){
		ch=getch();
		if(ch==(int)13)break;
		cout<<ch;
		university+=ch;
	}
cout<<endl<<"Select:\n 1.Semester fee\n\n2.Admission fee\n\n3.Summer semester fee\n\n4.Other\n\n";
cin>>a;
if(a==1){cout<<"\nPay Rs.25000 against voucher number given to you: \n";}
else if(a==2){cout<<"\nPay Rs.47000 against voucher number given to you: \n";}
else if(a==3){cout<<"\nPay Rs.6000 against voucher number given to you: \n";}
else if(a==4){cout<<"\nEnter amount: \n";
cin>>other; }
cout<<"\nEnter voucher number: \n";
cin>>voucher;
cout<<endl<<"Enter Password to Confirm: ";
callpass();	

}
else if(x==2){
	char ch;
	string college;
cout<<"\nEnter College Name: \n";
for(int i=0;;i++){
		ch=getch();
		if(ch==(int)13)break;
		cout<<ch;
		college+=ch;}
		cout<<endl<<"\nSELECT:\n\n1.Monthly Fee Rs.5000\n\n2.Annual Fee Rs.55000.\n\n";
		cin>>x;
		cout<<"\nEnter Password to confirm: \n";
		callpass();
}

else if(x==3){
	char ch;
	string school;
cout<<"\nEnter School Name: \n";
for(int i=0;;i++){
		ch=getch();
		if(ch==(int)13)break;
		cout<<ch;
		school+=ch;}
		cout<<endl<<"\nSELECT:\n\n1.Monthly Fee Rs.5000\n\n2.Annual Fee Rs.55000.\n\n";
		cin>>x;
		cout<<"\nEnter Password to confirm: \n";
		callpass();
}
}
else if(x==4){
system("cls");
cout<<"\n\t\t\t________________DONATION_____________\n\n";
cout<<"\nCHOOSE: \n";
cout<<"\n1.PM Corona Fund\n\n2.PM Dam Fund\n\n3.EDHI\n\n";
cin>>x;
cout<<endl<<"Enter amount you want to donate: \n";
cin>>x;
cout<<endl<<"Enter your password to confirm: \n";
callpass();}
else if(x==5){menu();}
	
}	

int main(){
	Easypaisa e;
	e.title();
	e.showdata();
}