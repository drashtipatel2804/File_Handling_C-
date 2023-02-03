/*) Write a program to create a class Job with three data members 
job id, job time in hours, and per hour rate that is wages of job. 
Include getData() to take input from user and displayData() to 
display details on screen. Overload binary (+) operator as a friend 
function and return integer that indicate total time for two job 
and overload (-)operator as a friend function and return integer 
that indicate difference between time of two job. Include main() 
to achieve the mentioned functionalities.*/

#include<iostream>
using namespace std;
class job
{
	int id , hour;
	float rate;
	public:
		job()
		{
			id=hour=0;
			rate=0.0;
		}
		void getdata()
		{
			cout<<"enter id"<<endl;
			cin>>id;
			cout<<"enter hour"<<endl;
			cin>>hour;
			cout<<"enter rate"<<endl;
			cin>>rate;
		}
		void display()
		{
			//cout<<"id="<<id<<endl;
			cout<<"hour="<<hour<<endl;
			//cout<<"rate="<<rate<<endl;
		}
		friend job operator + (job j1,job j2)
		{
			job j;
			j.hour=j1.hour+j2.hour;
			return j;
		}
		friend job operator - (job j1,job j2)
		{
			job j;
			j.hour=j1.hour-j2.hour;
			return j;
		}
		
		
};
int main()
{
	job j1,j2,j3;
	cout<<"enter j1"<<endl;
	j1.getdata();
	cout<<"enter j2"<<endl;
	j2.getdata();
	j3=j1+j2;
	j3.display();
	j3=j1-j2;
	j3.display();
	return 0;
}
/*enter j1
enter id
1
enter hour
12
enter rate
1
enter j2
enter id
1
enter hour
10
enter rate
1
hour=22
hour=2*/
