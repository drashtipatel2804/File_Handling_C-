#include<iostream>
using namespace std;
class date
{
	int d,m,y;
	public:
		date()
		{
			d=m=y=0;
		}
		date(int d1,int m1,int y1)
		{
			d=d1;
			m=m1;
			y=y1;
		}
		void getdata()
		{
			cout<<"enter date"<<endl;
			cin>>d>>m>>y;
		}
		void show()
		{
			cout<<d<<":"<<m<<":"<<y<<endl;
		}
		int leap()
		{
			if((y%4==0 && y%100!=0) || (y%400==0))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		int monthday()
		{
			int m1[12]={31,28,31,30,31,30,31,31,30,31,30,31};
			if(m==2 && leap())
			{
				return 29;
			}
			else
			{
				return m1[m-1];
			}
		}
		void operator ++()
		{
			++d;
			if(d>monthday())
			{
				d=1;
				m++;
			}
			if(m>12)
			{
				m=1;
				y++;
			}
		}
};
void nextday(date &d1)
{
	cout<<"date:"<<endl;
	d1.show();
	++d1;
	cout<<"after"<<endl;
	d1.show();
}
int main()
{
	date d1(14,4,2002);
	date d2(28 , 4, 1992);
	nextday(d1);
	nextday(d2);
	date t;
	t.getdata();
	nextday(t);
	return 0;
}
