/*
13.	Write a C++ program using Object Oriented Programming concepts
to Input Votes for two candidates and find winner of the Election 
based on the received votes.		
*/
#include<iostream>
using namespace std;
class Election
{
	private:
		int sb=0,count[2]={ 0 };
	public:
		Election()
		{
			cout<<"\n\t\t\tELECTION\n";
			cout<<"\nPress 1 to vote for Candidate 1";
			cout<<"\nPress 2 to vote for Candidate 2\n";
		}
		void castvote()
		{
			int vote;
			cout<<"\nPlease cast your vote: ";
			cin>>vote;
			if(vote>=1 && vote <= 2)
			count[vote-1]++;
			else
			sb++;
		}		
		void ElectionResults()
		{
			cout<<"\n\n\t\t\tElection Results"<<endl;
			for(int i=0; i<2; i++)
			cout<<"\nCandidate "<<i+1<<" got "<<count[i]<<" votes. ";
			cout<<"\n\nSpoilt Ballots: "<<sb<<endl;
		}
};
int main()
{
	char choice;
	Election E;
	do
	{
		E.castvote();
		cout<<"Anyone left?(y/n): ";
		cin>>choice;
	}
	while(toupper(choice)=='Y');
	system("cls");
	E.ElectionResults();
	return 0;
}