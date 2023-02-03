/*) Write a C++ program to create class called Company having two 
members such as company name and balance and create other 
required member functions for getting and setting values. 
Overload (+) operator to add balance of two company objects and 
(-) operator to subtract balance of two company objects. Write 
main() to demonstrate above mentioned functionalities.*/

#include<iostream>
using namespace std;
class company
{
	string cname;
	int balance;
	public:
	company()
	{
		cname="";
		balance=0;
	}
	void getdata()
	{
		cout<<"enter company name"<<endl;
		cin>>cname;
		cout<<"enter balance"<<endl;
		cin>>balance;
	}
	void display()
	{
		cout<<"balance = "<<balance<<endl;
	}
	company operator + (company c1)
	{
		company temp;
		temp.balance=balance+c1.balance;
		return temp;
	}
	company operator - (company c2)
	{
		company temp;
		temp.balance=balance - c2.balance;
		return temp;
	}
};
int main()
{
	company c1,c2,c3;
	cout<<"enter c1"<<endl;
	c1.getdata();
	cout<<"enter c2"<<endl;
	c2.getdata();
	c3=c1+c2;
	c3.display();
	cout<<"enter c1"<<endl;
	c1.getdata();
	cout<<"enter c2"<<endl;
	c2.getdata();
	c3=c1-c2;
	c3.display();
	return 0;
}
/*enter c1
enter company name
natraj
enter balance
25000
enter c2
enter company name
caino
enter balance
30000
balance = 55000
enter c1
enter company name
natak
enter balance
10000
enter c2
enter company name
hp
enter balance
25000
balance = -15000*/

