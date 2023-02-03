/*Write a c++ program which define the class Time with private data members hours, minutes and
seconds. Create getter and setter method, Overload the + operator to make the addition of two times.
Ex. If there are three objects of type Time t1, t2, t3 and user write the programming statement t3 = t1 +
t2, so time t1 and t2 will be added and store in object t3.  [Hint: 60 seconds = 01 minute, 60 minutes =
01 hour*/

#include<iostream>
using namespace std;
class time
{
	int h,m,s , sum ,s1,s2,s3,hour,min,sec;
	public:
		void getdata()
		{
			cout<<"enter hour"<<endl;
			cin>>h;
			cout<<"enter minute"<<endl;
			cin>>m;
			cout<<"enter second"<<endl;
			cin>>s;
			s1=h*3600;
			s2=m*60;
			s3=s1+s2+s;
		}
		void display()
		{
			cout<<"after addition of two time"<<sum<<endl;
			hour=sum/3600;
			min=(sum/60)%60;
        	sec=sum%60;
        	cout<<"time ="<<hour<<"/"<<min<<"/"<<sec<<endl;
		}
		time operator + (time t1 )
		{
			time temp;
			temp.sum=s3+t1.s3;
			return temp;
		}
};
int main()
{
	time t1,t2,t3;
	cout<<"enter t1"<<endl;
	t1.getdata();
	cout<<"enter t2"<<endl;
	t2.getdata();
	t3=t1+t2;
	t3.display();
}
