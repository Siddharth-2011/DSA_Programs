#include<iostream>
using namespace std;
class placement
{
	int score;
	public:
		placement()
		{
			cout<<"Enter the score: ";
			cin>>score;
		}
	 	int operator +(placement &p)
		{
			return(score+p.score);
		}
		
};
main()
{
	placement p1;
	placement p2;
	
	cout<<p1+p2;//p1.opeartor +(p2);
}
