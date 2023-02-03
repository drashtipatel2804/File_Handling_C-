//Array of objects
#include<iostream>
using namespace std;
class stud
{
	string name;
	public:
	stud()
	{
		name="";
	}
	void getdata()
	{
		cout<<"enter name"<<endl;
		cin>>name;
	}
	void display()
	{
		cout<<name<<endl;
	}
};
int main()
{
	int  count;
	count=0;
	char ch;
	stud s[10];
	for (int i=0;i<10;i++)
	{
		cout<<"initialize object y or n"<<endl;
		cin>>ch;
		if(ch=='y')
		{
			s[i].getdata();
			count++;
		}
		else
		{
			break;
		}
	}
	cout<<"stud details"<<endl;
	for(int i=0 ; i<count ; i++)
	{
		s[i].display();
	}
	return 0;
}

