/*) Write a C++ program to create a class namely SoccerPlayer which 
contains data members such as a player's jersey number, 
number of goals and number of assists. Include GetDetails and 
ShowDetails() as member function. Also overload (>) operator as 
friend function which compares two SoccerPlayers if the sum of 
goals plus assists is greater. Create an array of 11 SoccerPlayers,
then use the (>) operator to find the player who has the greatest 
total of goals plus assists.*/

#include<iostream>
using namespace std;
class player
{
	public:
	int id,goals,assists,sum;
		player()
		{
			
		}
		void getdata()
		{
			cout<<"enter id"<<endl;
			cin>>id;
			cout<<"enter goals"<<endl;
			cin>>goals;
			cout<<"enter assists"<<endl;
			cin>>assists;
			sum=goals+assists;
		}
		void display()
		{
			cout<<"id="<<id<<endl;
			cout<<"goals="<<goals<<endl;
			cout<<"assists="<<assists<<endl;
			cout<<"sum="<<sum<<endl;
		}
		friend bool operator > (const player& , const player& );	
};

bool operator >(const  player& p1, const player& p2)
{
	if(p1.sum > p2.sum)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{
	player p[11] ;
	int n ;
	cout<<"how many player"<<endl;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		p[i].getdata();
	}
	
	for(int i=0;i<n;i++)
	{
		if(p[i] > p[i+1])
		{
			p[0]=p[i];
		}
	}
	
	p[0].display();
	
	return 0;
}
/*how many player

3
enter id
1
enter goals
10
enter assists
20
enter id
2
enter goals
30
enter assists
40
enter id
3
enter goals
50
enter assists
60
id=3
goals=50
assists=60
sum=110
*/
