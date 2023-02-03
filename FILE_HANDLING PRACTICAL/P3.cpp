/*) Write a program to sum the real and imaginary part of different object 
using stream operator overloading and + operator overloading.
Overload the operators using friend function.*/

#include<iostream>
using namespace std;
class complex
{
	float real , imag;
	public:
	complex()
	{
		real=imag=0.0;
	}
	void getdata()
	{
		cout<<"enter real num"<<endl;
		cin>>real;
		cout<<"enter imag num"<<endl;
		cin>>imag;
	}
	void display()
	{
		cout<<"real num="<<real<<endl;
		cout<<"imag num="<<imag<<endl;
	}
	friend complex operator + (complex c1,complex c2)
	{
		complex temp;
		temp.real=c1.real+c2.real;
		temp.imag=c1.imag+c2.imag;
		return temp;
	}
};
int main()
{
	complex c1,c2,c3;
	cout<<"enter c1"<<endl;
	c1.getdata();
	cout<<"enter c2"<<endl;
	c2.getdata();
	c3=c1+c2;
	c3.display();
	return 0;
}
/*enter c1
enter real num
10
enter imag num
20
enter c2
enter real num
40
enter imag num
50
real num=50
imag num=70*/
