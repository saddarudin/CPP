#include<iostream>
#include<istream>
#include<fstream>
#include<string.h>
#include<stdlib.h>

using namespace std;

void login();
void registr();
void forgot();

int main()
{
    int choice;
    cout<<"\n\n********************  Main Menu  ****************\n\n";
    cout<<"\n1.LOGIN\n";
    cout<<"\n2.Register\n";
    cout<<"\n3.Forgot Password OR Username?\n";
    cout<<"\nEnter your choice : ";
    cin>>choice;
    switch(choice)
    {
	case 1:
		login();
		break;
	case 2:
		registr();
		break;
	case 3:
		forgot();
		break;
	case 4:
	    cout<<"\nThanks for using login page\n";
		break;
	default:
		cout<<"Sorry, wrong choice selected\n";
		main();
    }

}




void registr()
{
	string reguser,regpass;
	system("cls");
	cout<<"\nEnter user name: \n";
	getline(cin,reguser);
	getline(cin,reguser);
	cout<<"\nEnter Password: \n";
	getline(cin,regpass);
//	getline(cin,regpass);	
	ofstream reg("database.txt",  ios::app);
	reg<<reguser<<' '<<regpass<<endl;
	system("cls");
	cout<<"\nRegistration is Successfull\n";
	main();
}

void login()
{
	int exist;
	string user,pass,u,p;
	system("cls");
	cout<<"\nEnter user name:\n";
	getline(cin,user);
	getline(cin,user);
	cout<<"\nEnter the password:\n";
	getline(cin,pass);
	
	ifstream input("database.txt");
	
	while(input>>u>>p)
	{
		if(u == user && p == pass)
		{
			exist = 1;
		}
	}
	input.close();
	if(exist == 1)
	{
		cout<<"\nHello "<<user<<"\n\nWe are glad that you are here\n";
		cin.get();
		main();
	}
	else
	{
		cout<<"\nSorry! Login Error! \n";
		cin.get();
		main();
	}
}

void forgot()
{
	int ch;
	system("cls");
	cout<<"\n1.Search your ID by username \n";
	cout<<"\n2.Search your account by password\n";
	cout<<"\n3.Main Menu\n";
	cout<<"\nEnter your choice: \n";
	cin>>ch;
	
	switch(ch)
	{
		case 1:
		 {
			int ex=0;
			string searchuser,su,sp;
			cout<<"\nEnter user name: \n";
			getline(cin,searchuser);
			getline(cin,searchuser);
			
			ifstream searchu("database.txt");
			while(searchu>>su>>sp)
			{
				if(su == searchuser)
				{
					ex = 1;
					break;
				}
			}
			searchu.close();
			if(ex==1)
			{
				cout<<"\nHurray ! account found! \n";
				cout<<"\nYour password is "<<sp;
				cin.get();
				main();
			}
			else
			{
				cout<<"\nSorry! your account is not found!\n";
				cin.get();
				main();
			}
			break;
		 }
		case 2:
			{
				int exi=0;
				string searchpass,su2,sp2;
				cout<<"\nEnter your password:\n";
				getline(cin,searchpass);	
				getline(cin,searchpass);
//                cin>>searchpass;
				
				ifstream searchp("database.txt");
				while(searchp>>su2>>sp2)
				{
					if(sp2 == searchpass)
					{
						exi = 1;
					}
				}
				searchp.close();
				if(exi ==1)
				{
					cout<<"\nHurray! account fount \n";
					cout<<"\n Your user name is: "<<su2<<endl;
					cin.get();
					main();
				}
			}
		case 3:
			{
				main();
				break;
			}
		default:
			cout<<"\nYou've given a wrong choice. Press a key to try again.\n";
			cin.get();
			forgot();
			
    }
	
	
}

