#include<iostream>
using namespace std;
int main()
{
	cout<<"IMMUNIZATION CERTIFICATE FOR COVID-19\n";
	string Name,Dateofbirth,CNICno,Nationality,PassportNo,IssueDate,CertificateNo,VaccineName,Dose,Date;
	cout<<"Name :";
	getline(cin,Name);
	cout<<"Date Of Birth :";
	getline(cin,Dateofbirth);
	cout<<"CNIC No :";
	getline(cin,CNICno);
	cout<<"Nationality :";
	getline(cin,Nationality);
	cout<<"Passport No :";
	getline(cin,PassportNo);
	cout<<"has been administered COVID-19 vaccine \n";
	cout<<"Issue Date :";
	getline(cin,IssueDate);
	cout<<"Certificate No :";
	getline(cin,CertificateNo);
	cout<<"Vaccine Name :";
	getline(cin,VaccineName);
	cout<<"Dose :";
	getline(cin,Dose);
	cout<<"Date :";
	getline(cin,Date);
	return 0;
	
	
}
