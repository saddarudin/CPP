#include<iostream>
#include<fstream>
#include<string>
#include<conio.h>
#include<iomanip>
#include<cstring>

using namespace std;

class Easypaisa
{
	private:
		string password;
		string name; 
    public:
	    string pin,username;
	    int counter=0;
	    void title();
	    void showdata();
	    void newaccount();
	    void readname();
	    void readpass();
	    void setpass();
	    void login();
	    void callpass();
	    void menu();
	    void moneytransfer();
        void mobileload();
        void billpayment();
        void payments();

	
	
	
	
};

/*        ****************** TITLE ********************                    */
                    
void Easypaisa :: title()
{
	cout<<setw(45);
 for(int i=0;i<42;i++)
 {
	 	cout<<(char)3;
 if(i==20)
	 {
	 	cout<<endl<<setw(45)<<(char)3<<"                   "<<(char)3;
	 	cout<<endl<<setw(45)<<(char)3<<" Easypaisa Service "<<(char)3;
	 	cout<<endl<<setw(45)<<(char)3<<"                   "<<(char)3;	 
		cout<<endl<<setw(45);  
	 }   
 }
}


/*    ************************ Show Data **************************           */

void Easypaisa :: showdata()
{	
	system("cls");
	title();
	cout<<"\n\n1.Create a new account";
	cout<<"\n\n2.Login";
	cout<<"\n\nEnter your choice: ";   
	int a;
	cin>>a;
	system("cls");
		
switch(a)
{/*    ************** New Account **************          */	
	case 1:
		{
			newaccount();
	        setpass();
	        cout<<"\nWould you like to see your password?(y/n) \n";
	        char character;
	        character=getch();
            if(character=='y'||character=='Y')
			{
				cout<<"\nYou Entered: "<<password<<endl;
			}
label:          cout<<"\n\nConfirm password: ";
                callpass();
            if(password==pin)
			{
				system("cls");
	            cout<<"\n\nYou've created your account succesfully ....";
	            cout<<endl<<"\nPress any key to log in: \n";
	            getch();
	            system("cls");
	            login();
			} 
			else
			{
				system("cls");
	            cout<<"Incorrect confirm password! Try Again\n";
				pin.erase(0,counter);
				goto label;				
			} 
                  
		}
		break;
	case 2:
		{
			readname();
		}

}
}


         /********************* NEW ACCOUNT *****************/

void Easypaisa :: newaccount()
{	
	title();
	cout<<"\n\t\t\t_________Creating New Account________\n\n";	
	ofstream sadar1("sadar.txt",ios::app);	
//	out.open("projectnames.txt");
	cout<<"Enter Your Name: \n";
    getline(cin,name);
	getline(cin,name); 
	sadar1<<name<<"\n";
	cout<<"\nEnter your CNIC (without dashes): \n";	
    long long int nic;
    cin>>nic;
    cout<<"\nEnter Date Of Birth (DD-MM-YY): \n";
    char ch;
    int date,month,year;
	cin>>date>>ch>>month>>ch>>year;
 if(month<0||month>12)
 {  	
    system("cls");
	cout<<"\n\n\t\tIncorrect Month! \n";
	newaccount();
 }
 if(year>2004)
 { 	
    system("cls");
	cout<<"\n\n\t\tYou're Ineligible!!! You are under 18!\n";
	newaccount();
 }
}

/*        ************  Read Name  ********************/
 
void Easypaisa :: readname()
{
  string s1,s2;
  ifstream sadar1("sadar.txt");
  cout<<"Enter Your Name:";
  getline(cin,s2);
  getline(cin,s2);
  while(sadar1.good())
  {
  	getline(sadar1,s1);
  	if(s2==s1)
	{  
  	readpass();
	break;
    } 
	
  }
   if(s2!=s1)
   {
  
	  cout<<"Username does not exist! Try again!";
	  readname();
	}

}


/*     ****************  Read Password  ****************                     */

void Easypaisa :: readpass()
{
	string pass1,pass2;	
	int lengt;
	pass1.erase(0,lengt);
	ifstream passread("sadar.txt");
	cout<<"\n\nEnter password: ";
	for(int j=0;;j++)
	{
		char g;
		g=getch();
		if(g==(int)13)break;
		else if(g==(int)8)
		{
			pass1.erase(0,j+1);
			readpass();
		}
		else
		{
			pass1+=g;
			cout<<"*";
		}
	}
	lengt=pass1.length();
  while(passread.good())
  {
  	getline(passread,pass2);
  	if(pass1==pass2)
	{  
  	menu();
	break;
    } 
	
  }
   if(pass1!=pass2)
   {
  
	  cout<<"\nIncorrect Password! Try again";
	  readpass();
	}


}

/*         *************   SET PASSWORD **************       */


void Easypaisa :: setpass()
{	int len;
	cout<<"\nEnter new pin: \n";
	password.erase(0,len);
	ofstream out("projectcodes.txt",ios::app);
 for(int i=0;;i++)
 {
 	char ch;
	ch=getch();
	if(ch==(char)13)break;
	else if(ch==(char)8)
	{
	    password.erase(0,i+1);
		setpass();
	}
	else
	{		
	    password+=ch;
	    cout<<"*";
	}
 } 
  len=password.length();
 out<<password<<"\n";
 
}
	
	


     /*********************  CALLING A PASSWORD ***************/
     
     
void Easypaisa :: callpass()
{
	int leng;
	pin.erase(0,leng);
    counter=0;
 for(int i=0;;i++)
 {
	counter++;
	char ch;
    ch=getch();
    if(ch==(char)13)break;
    else if(ch==(int)8)
	{
	    pin.erase(0,counter+1);
		callpass();
	}
    else
	{		
	    pin+=ch;
        cout<<"*";
	}
 }
 leng=pin.length();	
}

/*   ******************  LOGIN   *******************       */
	
void Easypaisa :: login()
{
	title();	
	cout<<"\n\t\t\t_____________LOGIN_______________\n\n";
	cout<<"\nEnter User Name:(You may have to enter the same name two times) \n";
	getline(cin,username);
	getline(cin,username);
 if(username==name)
 {
saddar4:    cout<<"\nEnter password: ";
	pin.erase(0,counter);
	callpass();
   if(password==pin)
   {
        menu();
   }
   else
   {
        system("cls");
	    cout<<"\n\n\t\tIncorrect Password\n";
	    goto saddar4;
   }
 }
 else
 {
 	system("cls");
    cout<<"\nUsername does not exist!\n";
	login();
 }
}			

       /**************Main Menu***********/

void Easypaisa :: menu()
{
	system("cls");
    title();
    cout<<"\n\n\t\t\t____________********  Welcome To Main Menu    *********______________\n\n";
	cout<<"1.Money Transfer\n\n";
	cout<<"2.Mobile Load\n\n";
	cout<<"3.Bill Payment\n\n";
	cout<<"4.Payments\n\n";
	cout<<"5.My Account\n\n";
	cout<<"6.LOG OUT\n\n";
	cout<<"Enter your choice: \n";	
	int choose;
	cin>>choose;
 switch(choose)
 {
	case 1:
		{
			moneytransfer();
			break;
		}
		
	case 2:
		{
			mobileload();
			break;
		}
	case 3:
		{
			billpayment();
			break;
		}
	case 4:
		{
			payments();
			break;
		}
	case 5:
		{
			break;
		}
	case 6:
		{
			showdata();
			break;
		}
	default:
		{
			system("cls");
			menu();
		 	break;
		}
		
		
 } 

}


/*            ********1.Money Transfer******               */

void Easypaisa :: moneytransfer()
{
	system("cls");
	title();		
	cout<<"\n************* Money Transfer *************\n\n";
	cout<<"1.Send To Mobile Account\n\n";
	cout<<"2.Send To CNIC\n\n";
	cout<<"3.Bank Transfer\n\n";
	cout<<"4.Back to main menu\n\n";
	cout<<"Enter your choice: \n";
	int select;
	cin>>select;
	
	
 switch(select)
 {
 	
 	case 1:/*************MOBILE ACCOUNT****************/

 		{
        	system("cls");
 		    title();
            cout<<"\n\t\t___________________Mobile Account______________\n\n";
            cout<<"1.Easypaisa\n\n";
			cout<<"2.JAzzcash\n\n";
			cout<<"3.Back to main menu\n\n";
			cout<<"Enter your choice: \n";
			int b;
			cin>>b;
         if(b==1||b==2)
		 {
		    system("cls");
		    title();
            cout<<"\n\nEnter receiver mobile number: ";
            long long int rmno;
            cin>>rmno;
            cout<<"\nEnter amount: ";
            long int amount;
            cin>>amount;
            cout<<"\nEnter password: ";
            callpass();
            exit(0);
		 }
		 if(b==3)
		 {
		 	menu();
		 }
         else
         {
		    system("cls");
			moneytransfer();
		 }
		 break;
        }
    case 2:/*         *********************CNIC****************      */

    	{    		
    		 
    		system("cls");
    		title();
            cout<<"\n\t\t_________________CNIC_______________\n\n";
            cout<<"Enter Receiver Mobile Number: ";
            long long int rmno;
            cin>>rmno;
            cout<<"\nEnter receiver CNIC number: ";
            long long int rnic;
			cin>>rnic;
            cout<<"\nEnter ammount: ";
            long int amount;
            cin>>amount;
            cout<<"\nEnter Password: ";
            callpass();
			break;    		 
		}
	case 3:
		{
			 /**************Bank Transfer******************/
			 
			 
			 	system("cls");
			 	title();
                cout<<"\n\t\t_______________BANK Transfer_____________\n\n";
                cout<<"\n\n1.HBL\n\n2.UBL\n\n3.Bank Al Falah\n\n4.Bank Al Habib\n\n";
				cout<<"5.Allied Bank Limited\n\n6.Meezan Bank\n\n7.MCB Bank\n\n";
                cout<<"8.NBP\n\n9.Faysal Bank Pakistan\n\n10.JS Bank Limited\n\n";
                cout<<"11.Askari Bank\n\n12.Summit Bank\n\n";
				cout<<"13.Bank Islami Pakistan Limited\n\n14.Soneri Bank";
                cout<<"\n\n15.Bank Of Punjab\n\n16.Sindh Bank\n\n17.Other Bank";
				cout<<"\n\n18.Back\n\n";
				cout<<"Enter your choice\n";
				int choice;
                cin>>choice;
                system("cls");
                title();
                cout<<"\n\n";
                if(choice==1)
				{
				    cout<<"________________________****  HBL   ****__________________________________"; 
				}
                else if(choice==2)
				{
				    cout<<"________________________****  UBL   *****_________________________________________";
				}
                else if(choice==3)
				{
				    cout<<"________________________********  Bank Al Falah   *****_______________________";
				}
                else if(choice==4)
				{
				    cout<<"__________________**********    Bank Al Habib     ********__________________";
				}
                else if(choice==5)
				{
				    cout<<"___________________***********   Allied Bank Limited     *******_______________";
				}
                else if(choice==6)
				{
				    cout<<"________________***********  Meezan Bank  ******____________________";
				}
                else if(choice==7)
				{
				    cout<<"__________________**************  MCB Bank     ***********______________________";
				}
                else if(choice==8)
				{
				    cout<<"____________________*********   NBP  *********_______________";
				}
                else if(choice==9)
				{
				    cout<<"___________**** Faysal Bank Pakistan   **********__________________-__";
				}
                else if(choice==10)
				{
				    cout<<"________________****  JS Bank Limited   ****_______________";
				}
                else if(choice==11)
				{
				    cout<<"_____________*******  Askari Bank   ********__________________";
				}
                else if(choice==12)
				{
				    cout<<"______________*********  Summit Bank    **********__________________";
				}
                else if(choice==13)
				{
				    cout<<"__________________*****************  Bank Islami Pakistan   *******___________";
				}
                else if(choice==14)
				{
				    cout<<"____________***********  Soneri Bank    ********__________________";
				}
                else if(choice==15)
				{
				    cout<<"_____________*********   Bank Of Punjab  ************_________________";
				}
                else if(choice==16)
				{
				    cout<<"___________**********  Bank Of Sindh  ********_____________";
				}
                else if(choice==17)
				{
				    cout<<"\nEnter Bank Name: ";				    
	                string bankname;
                    getline(cin,bankname);
	                getline(cin,bankname);
	                system("cls");
	                title();
	                cout<<"\n\n_______________*******   "<<bankname<<"    ******___________________";
				}
                else
				{
				    system("cls");
					moneytransfer();
				}
                    cout<<"\n\nEnter account number: ";
                    long long int acno;
                    cin>>acno;
                    cout<<"\n\nEnter receiver mobile number: ";
                    long long int remono;
                    cin>>remono;
                    cout<<"\n\nEnter receiver NIC number: ";
                    long long int renic;
                    cin>>renic;
                    cout<<"\nEnter amount: ";
                    long int paisa;
                    cin>>paisa;
                    cout<<"\nEnter Password: ";
                    callpass();
					break;			 
		}
	case 4:
		{
			/*             **********Back********                  */
			menu();
			break;		         	
		}
	default :
		{
			moneytransfer();
			break;
		}
         
      
 			
 }




}


/*          ***********2.Mobile Load*************                             */

void Easypaisa :: mobileload()
{	
	system("cls");
	title();
	cout<<"\n\n1.Telenor";
	cout<<"\n\n2.Mobilink";
	cout<<"\n\n3.Ufone";
	cout<<"\n\n4.Back to main menu\n\n";
	cout<<"Enter your choice: \n";	
	int c;
	cin>>c;
	system("cls");
	title();
    if(c==1)
    {
		cout<<"\n__________******  TELENOR NETWORK   ******________\n";
	}
    else if(c==2)
	{
	    cout<<"\n__________******  MOBILINK NETWORK   ******________\n";
	}
    else if(c==3)
	{
	    cout<<"\n__________******  UFONE NETWORK   ******________\n";
	}
    else if(c==4)
    {
	    menu();
	}
    else 
	{
	    mobileload();
	}	
	cout<<"\nEnter Mobile Number: ";
	long long int mno;
	cin>>mno;
	cout<<"\nEnter amount: ";
	long int rupees;
	cin>>rupees;
	cout<<"\nEnter Password: ";
	callpass();
}
   
                  /**************3.Bill Payment************/

void Easypaisa :: billpayment()
{
	system("cls");
	title();
	int d=0;
	cout<<"\n\n1.Electricity";
	cout<<"\n\n2.Telephone";
	cout<<"\n\n3.Gas";
	cout<<"\n\n4.Internet";
	cout<<"\n\n5.Water";
	cout<<"\n\n6.Back to main menu\n\n";
	cout<<"Enter your choice: \n";
	int e;
	cin>>e;
	system("cls");
	title();
	cout<<"\n\n";
    if(e==1)
	{
	    d=5000;
		cout<<"_______**** PAYING ELCTRICITY BILL USING EASYPAISY APP  ***____";
	}
    else if(e==2)
	{  
	    d=1000;
		cout<<"_______**** PAYING TELEPHONE BILL USING EASYPAISY APP  ***____";
    }
    else if(e==3)
	{
	    d=2000;
		cout<<"_______**** PAYING SUI GASS BILL USING EASYPAISY APP  ***____";
	}
    else if(e==4)
	{
	    d=4000;
		cout<<"_______**** PAYING INTERNET BILL USING EASYPAISY APP  ***____";
	}
    else if(e==5)
	{
	    d=500;
		cout<<"_______**** PAYING WATER BILL USING EASYPAISY APP  ***____";
	}
    else if(e==6)
	{
	    menu();
	} 
    else
	{
	    system("cls");billpayment();
	}
	cout<<"\n\nEnter consumer number: \n";	
	long long int conno;
	cin>>conno;
	cout<<"\n\nYour bill amount is Rs."<<d<<" only.\n";
	cout<<"\nEnter Password to confirm\n";
	callpass();
}

                   /******** 4.Payment *********/

void Easypaisa :: payments()
{
	system("cls");
	title();
	cout<<"\n\n1.Online Ticket Booking";
	cout<<"\n\n2.Traffic Challan";
	cout<<"\n\n3.Pay Fee";
	cout<<"\n\n4.Donation";
	cout<<"\n\n5.Back to main menu\n\n";
	cout<<"Enter your choice:\n";
	int f;
	cin>>f;
	system("cls");
	title();
	
	     
switch(f)
{
	case 1: 
	{
			
	     /************* A.Online Ticket Booking   ****************/
	     
		cout<<"\n\t\t\t\t___________***  Online Ticket Booking    ******_________\n\n";
	    cout<<"\n\n\t\t\t**Pakistan's leading online ticket booking platform.**\n\n";
	    cout<<"\nBuy tickets with discounts and deals for\n\n";
	    cout<<"\n1.Coach";
		cout<<"\n\n2.Flight";
		cout<<"\n\n3.Train";
		cout<<"\n\n4.Cricket";
		cout<<"\n\n5.Back\n\n";
		cout<<"Enter your choice: \n";
		int g;
		cin>>g;
		system("cls");
		title();
		cout<<"\n";
		
				   
		    /**********  a.Coach Ticket Buying  *********/
		if(g==1)
		{
			cout<<"\n\t\t\t\t___________********  Online Ticket Booking   *********_________\n\n";
	        cout<<"\n\n\t\t\t**Pakistan's leading online ticket booking platform.**\n\n";
	        cout<<"\nEnter passanger's name: \n";
	        string customer;
	        getline(cin,customer);
	        getline(cin,customer);
	        cout<<"\nEnter passanger's mobile number: \n";
	        long long int number;
	        cin>>number;
	        cout<<"\nEnter departure date (DD-MM-YY): "<<endl;
	        int days,months,years;
	        char cher;
	        cin>>days>>cher>>months>>cher>>years;
	        cout<<"\nFrom (enter city name):\n";
	        string city1;
	        getline(cin,city1);
	        getline(cin,city1);
	        cout<<"\nTo (enter city name):\n";
	        string city2;
            getline(cin,city2);
            getline(cin,city2);
            system("cls");
            title();
            cout<<"\n";
            cout<<"\n\t\t\t\t___________*********   Online Ticket Booking     ********_________\n\n";
	        cout<<"\n\n\t\t\t**Pakistan's leading online ticket booking platform.**\n\n";
	        cout<<"\n\t\t\t\t_________****   COACH TICKET    *****________\n";
	        cout<<"____________________________________________________________________";
	        cout<<endl<<"Name of passanger: "<<customer<<endl;
	        cout<<endl<<"From: "<<city1<<endl;
	        cout<<endl<<"To: "<<city2<<endl;
	        cout<<endl<<"Date: "<<days<<"-"<<months<<"-"<<years<<endl;
	        cout<<endl<<"Coach Name: AKC"<<endl;
	        cout<<endl<<"Boarding Time: 10:20 AM"<<endl;
	        cout<<endl<<"Seat: 21"<<endl;
	        cout<<endl<<"Price: Rs.3300"<<endl; 
	        cout<<endl<<"**Price will be deducted from your account."<<endl;
	        cout<<endl<<"Enter Password to Confirm: ";
	        callpass();
		}
		else if(g==2)
		{
/*           **********  b. AIR TICKET BUYING    ********************               */
			
			cout<<"\n\t\t\t\t___________*********    Online Ticket Booking   *******_________\n\n";
	        cout<<"\n\n\t\t\t**Pakistan's leading online ticket booking platform.**\n\n";
	        cout<<"\nEnter passanger's name: \n";
	        string customer;
			getline(cin,customer);
	        getline(cin,customer);
	        cout<<"\n\nEnter passanger's NIC number: \n";
	        long long int cnic;
	        cin>>cnic;
	        cout<<"\nEnter passanger's mobile number: \n";
	        long long int number;
			cin>>number;
	        cout<<"\nEnter date of departure (DD-MM-YY): "<<endl;
	        int days,months,years;
	        char cher;
			cin>>days>>cher>>months>>cher>>years;
            cout<<"\nFrom (country name): \n";
            string country1;
			getline(cin,country1);
	        getline(cin,country1);
            cout<<"\n\nTo (country name): \n";
            string country2;
			getline(cin,country2);
	        getline(cin,country2);
	        system("cls");
	        title();
	        cout<<"\n\t\t\t\t___________**********    Online Ticket Booking *********_________\n\n";
	        cout<<"\n\n\t\t\t**Pakistan's leading online ticket booking platform.**\n\n";
	        cout<<"\n\t\t\t\t_________*****      AIR TICKET       ******________\n";
	        cout<<"____________________________________________________________________";
	        cout<<endl<<"Name of passanger: "<<customer<<endl;
	        cout.setf(ios::fixed);cout<<endl<<"NIC Number: "<<cnic<<endl;
	        cout.setf(ios::fixed);cout<<endl<<"Mobile Number: "<<number<<endl;
	        cout<<endl<<"From: "<<country1<<endl;
	        cout<<endl<<"To: "<<country2<<endl;
	        cout<<endl<<"Date: "<<days<<"-"<<months<<"-"<<years<<endl;
	        cout<<endl<<"Flight Name: ULON23"<<endl;
	        cout<<endl<<"Boarding Time: 10:20 PM"<<endl;
	        cout<<endl<<"Gate: 22"<<endl;
	        cout<<endl<<"Seat: 21B"<<endl;
	        cout<<endl<<"Price: Rs.95600"<<endl; 
	        cout<<endl<<"**Price will be deducted from your account."<<endl;
	        cout<<endl<<"Enter Password to Confirm: ";
	        callpass();
		}
		else if(g==3)
		{
				/*****************  c.Train Ticket Buying  ***************/

            cout<<"\n\t\t\t\t___________************    Online Ticket Booking   **********_________\n\n";
	        cout<<"\n\n\t\t\t**Pakistan's leading online ticket booking platform.**\n\n";
	        cout<<"\nEnter passanger's name: \n";
	        string customer;
			getline(cin,customer);
	        getline(cin,customer);
	        cout<<"\nEnter passanger's mobile number: \n";
	        long long int number;
			cin>>number;
	        cout<<"\nEnter date of departure (DD-MM-YY): "<<endl;
	        int days,months,years;
	        char cher;
			cin>>days>>cher>>months>>cher>>years;
            cout<<"\nFrom (station name): \n";
            string station1;
			getline(cin,station1);
	        getline(cin,station1);
            cout<<"\n\nTo (station name): \n";
            string station2;
			getline(cin,station2);
	        getline(cin,station2);
saddar:	    system("cls");
            title();      
	        cout<<"\nSELECT CLASS:";
			cout<<"\t\n\n1.Economy";
			cout<<"\t\n\n2.Executive";
			cout<<"\t\n\n3.First Class\n\n";
			int h,k;
	        cin>>h;
	        system("cls");
	        title();
	        if(h==1)k=2500;
	        else if(h==2)k=3200;
	        else if(h==3)k=2800;
		    else
            {
			    goto saddar; 
			}
			cout<<"\n\t\t\t\t___________Online Ticket Booking Pakistan_________\n\n";
	        cout<<"\n\n\t\t\t**Pakistan's leading online ticket booking platform.**\n\n";
	        cout<<"\n\t\t\t\t_________TRAIN TICKET________\n";
	        cout<<"____________________________________________________________________";
	        cout<<endl<<"Name of passanger: "<<customer<<endl;
	        cout<<endl<<"From: "<<station1<<endl;
	        cout<<endl<<"To: "<<station2<<endl;
	        cout<<endl<<"Date: "<<days<<"-"<<months<<"-"<<years<<endl;
	        cout<<endl<<"Train Name: Allama Iqbal Express"<<endl;
	        cout<<endl<<"Boarding Time: 11:00 AM"<<endl;
	        cout<<endl<<"Seat: 11A"<<endl;
	        cout<<endl<<"Price: Rs."<<k<<endl; 
	        cout<<endl<<"**Price will be deducted from your account."<<endl;
	        cout<<endl<<"Enter Password to Confirm: ";
	        callpass(); 
		}
		else if(g==4)
		{
				/*****************  e. CRICKET TICKET BUYING  ******************/

		    long long int number;
			cout<<"\nEnter your mobile number: \n";        	
	        cin>>number;
			system("cls");
			title();	        
			cout<<"\n\t\t\t\t___________**********    Online Ticket Booking   **********_________\n\n";
	        cout<<"\n\n\t\t\t**Pakistan's leading online ticket booking platform.**\n\n";
	        cout<<"\n\n\t\t\t## Book your ticket for ICC Men's T20 World Cup 2022, Australia ##\n\n";	        
		    string s[6];
            s[0]="\n1.Sunday 23 October               Pakistan VS India                             Melbourne\n";
            s[1]="\n2.Thursday 27 October             Pakistan VS B1                                Perth\n";
            s[2]="\n3.Sunday 30 October               Pakistan VS A2                                Perth\n";
            s[3]="\n4.Thursday 3 November             Pakistan VS South Africa                      Sydney\n";
            s[4]="\n5.Sunday 6 November               Pakistan VS Bangladesh                        Adelaide\n";
            s[5]="\n6.Sunday 13 November              FINAL                                         Melbourne";	
            cout<<"  Day & Date                      Match                                         Ground Name:\n\n\n";
         for(int i=0;i<6;i++)cout<<s[i]<<endl;
            cout<<"\nSELECT MATCH: \n\n";
            int l;
            cin>>l;
            string match;
         for(int j=0;j<6;j++)
		 {
		    if(l==j+1)
			 match=s[j];
		 }
	        string part=match.substr(35,26);
	        string datepart=match.substr(0,25);
	        system("cls");
	        title();
	        cout<<"\n\t\t\t\t___________**********      Online Ticket Booking ***********_________\n\n";
	        cout<<"\n\n\t\t\t**Pakistan's leading online ticket booking platform.**\n\n";
	        cout<<"\n\t\t\t\t_________CRICKET MATCH TICKET________\n";
	        cout<<"\n____________________________________________________________________________________________________\n";
	        cout<<endl<<"              **********__________"<<part<<"______________**********"<<endl;
	        cout<<endl<<"Gate: 6"<<endl;
	        cout<<endl<<"Seat: 338F"<<endl;
	        cout<<endl<<"Date: "<<datepart<<endl;
        	cout<<endl<<"Price: Rs.2500"<<endl; 
	        cout<<endl<<"**Price will be deducted from your account."<<endl;
	        cout<<endl<<"Enter Password to Confirm: ";
	        callpass();
		}
		else
		{
			payments();
		}
		break;
	}
	case 2:/********  B. Traffic Challan   *********/
		{
			cout<<"\n\t\t\t________******    Traffic Challan         *********__________\n\n";
            cout<<endl<<"1.Pay fine of Rs.500 for having no helmet.\n";
            cout<<endl<<"2.Pay fine of Rs.200 for exceeding prescribed speed limit.\n";
            cout<<endl<<"3.Pay fine of Rs.300 for carrying passangers exceeding permissible limit.\n";
            cout<<endl<<"4.Pay fine of Rs.200 for violation of traffic signals.\n";
            cout<<endl<<"5.Pay fine of Rs.300 for overloading a goods vehicle.\n";
            cout<<endl<<"6.Pay fine of Rs.600 for driving a motor vehicle at night without proper lights.\n";
            cout<<endl<<"7.Pay fine of Rs.400 for driving a motor vehicle without a driving licence.\n";
            cout<<endl<<"Enter your choice: \n";
            int m;
			cin>>m;
            cout<<"\nTo confirm please enter password: \n";
            callpass();
			break;
		}
	case 3:        /************* C. Pay Fee  ***********/

		{
			cout<<"\n\t\t\t_____________**********              PAY FEE          **********____________\n\n";
            cout<<"\n\n1.University";
			cout<<"\n\n2.College";			
		    cout<<"\n\n3.School\n\n";
		    cout<<endl<<"Enter your choice: ";
		    int n;
            cin>>n;
            system("cls");
            title();
          if(n==1)  /***********  a. University  *************/
          {
          	cout<<endl<<"Enter University Name: \n";
	        string university;
			getline(cin,university);
	        getline(cin,university);
saddar1:	system("cls");
            title();
	        cout<<"\n_______*****   "<<university<<"    *********____________\n\n";
	        cout<<endl<<"Select type of fees:";
			cout<<"\n\n1.Semester fee";
			cout<<"\n\n2.Admission fee";
			cout<<"\n\n3.Summer semester fee";
			cout<<"\n\n4.Hostel";
			cout<<"\n\n5.Other\n\n";
	        int o;
			cin>>o;
			system("cls");
			title();
			if(o==1)
			{
			    cout<<"\nPay Rs.25000 against voucher number given to you: \n";
			}
            else if(o==2)
			{
			    cout<<"\nPay Rs.47000 against voucher number given to you: \n";
			}
            else if(o==3)
			{
			    cout<<"\nPay Rs.6000  against voucher number given to you: \n";
			}
            else if(o==4)
			{
			    cout<<"\nPay Rs.10000 against voucher number given to you: \n";
			}
            else if(o==5)
			{
			    cout<<"\nSpecify type of fees to pay: \n";
                string specie;
				getline(cin,specie);
				getline(cin,specie);
				cout<<endl<<"Enter amount to pay: ";
				long int u;
				cin>>u;
				system("cls");
				title();
				cout<<"\nPay Rs."<<u<<" against voucher number given to you: \n";
			}
			else
			{
			    goto saddar1;
			}
			    
				cout<<"\nEnter voucher number: \n";
                long int voucher;
				cin>>voucher;
                cout<<endl<<"Enter Password to Confirm: ";
                callpass();
		  }
		  else if(n==2)             /**********b. COLLEGE  ***********/
		  {		  	
		  	cout<<"\nEnter College Name: \n";
            string college;
			getline(cin,college);
	        getline(cin,college);
saddar2:	system("cls");
            title();
            cout<<"\n\n1.Transportation Fee\n\n2.Tution Fee.\n\n3.Hostel Fee";
			cout<<"\n\n4.Admission Fee\n\n5.Monthly Fee\n\n6.Annual Fee\n\n7.Other\n\n";
            cout<<"Enter your choice: ";
            int p;
	        cin>>p;
	        system("cls");
	        title();
	        cout<<"\n\n";
	        if(p==1)
			{
			    cout<<"You are paying Rs.500 to "<<college<<" for transportation fees\n";
			}
	        else if(p==2)
			{  
			    cout<<"You are paying Rs.4500 to "<<college<<" for tution fees\n";
			}
	        else if(p==3)
			{
			    cout<<"You are paying Rs.10000 to "<<college<<" for hostel fees\n";
			}
	        else if(p==4)
			{
			    cout<<"You are paying Rs.15000 to "<<college<<" for admission fees\n";
			}
	        else if(p==5)
			{
			    cout<<"You are paying Rs.1500 to "<<college<<" for monthly fees\n";
			}
	        else if(p==6)
			{
			    cout<<"You are paying Rs.16000 to "<<college<<" for annual fees\n";	
			}
			else if(p==7)
			{
	            cout<<"Specify type of fee: \n";
	            string otherfee;
				getline(cin,otherfee);
	            getline(cin,otherfee);	            
			    cout<<"\n\nEnter amount to pay: \n";
	            long int v;
				cin>>v;
	            cout<<"\nYou are paying Rs."<<v<<" to "<<college<<" for "<<otherfee<<" fees\n";	
			}
			else
			{
				goto saddar2;
			}
				cout<<"\nEnter Password to confirm: \n";
	            callpass();
          }
          else if(n==3) /*************  c. SCHOOL  ****************/

          {
          	string school;
            cout<<"\nEnter School Name: \n";
	        getline(cin,school);
	        getline(cin,school);
	        system("cls");
	        title();
	        cout<<"\n\nSELECT:\n\n1.Transportation Fee\n\n2.Tution Fee.";
			cout<<"\n\n3.Hostel Fee\n\n4.Admission Fee";
            cout<<"\n\n5.Monthly Fee\n\n6.Annual Fee\n\n7.Other\n\n";
	        int q;
			cin>>q;
saddar3:	system("cls");
            title();
            cout<<"\n\n";
			if(q==1)
			{
			    cout<<"You are paying Rs.500 to "<<school<<" for transportation fees\n";
			}
	        else if(q==2)
			{
			    cout<<"You are paying Rs.2500 to "<<school<<" for tution fees\n";
			}
	        else if(q==3)
			{
			    cout<<"You are paying Rs.7000 to "<<school<<" for hostel fees\n";
			}
	        else if(q==4)
			{
			    cout<<"You are paying Rs.10000 to "<<school<<" for admission fees\n";
			}
	        else if(q==5)
			{
			    cout<<"You are paying Rs.1000 to "<<school<<" for monthly fees\n";
			}
	        else if(q==6)
			{
			    cout<<"You are paying Rs.10000 to "<<school<<" for annual fees\n";
			}
			else if(q==7)
			{
	            cout<<"Specify type of fee: \n";
                string otherschoolfee;	 
	            getline(cin,otherschoolfee);
	            getline(cin,otherschoolfee);
	            cout<<"\n\nEnter amount to pay: \n";
	            long int w;
				cin>>w;
	            cout<<"\nYou are paying Rs."<<w<<" to "<<school<<" for "<<otherschoolfee<<" fees\n";	}
	        else
			{
				goto saddar3;
			}
	        cout<<"\nEnter Password to confirm: \n";
	        callpass();
          }
		 break;
	   }
	   
	case 4:    /************ D. DONATION  ***************/
        {
        	system("cls");
        	title();
        	cout<<"\n";
        	cout<<"\n\t\t\t________________********    DONATION   *********_____________\n\n";
            cout<<"\n1.PM Corona Fund\n\n2.PM Dam Fund\n\n3.EDHI\n\n";
            cout<<"\nEnter your choice: \n";
			int r;            
			cin>>r;
			system("cls");
			title();
            cout<<endl<<"Enter amount you want to donate: \n";
            long int t;
			cin>>t;
            cout<<endl<<"Enter your password to confirm: \n";
            callpass();
         break;
		}
	case 5:
	{
		menu();
	} 
}

}


int main()
{
	Easypaisa e;
	e.title();
	e.showdata();
//    e.menu();
}
	



