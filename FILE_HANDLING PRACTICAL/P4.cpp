/* Implement a class that represents complex numbers with data 
members real part 'a', imaginary part 'b' and member fuction 
InputNumber() to read complex number from keyboard and 
DisplayNumer() to display output on screen. Overload +, - and * 
operator on two complex number to get Addition, Subtraction 
and Multiplication respectively. 
Following are the formulas to compute complex numbers: 
 (a + bi) + (c + di) = (a + c) + (b + d)i
(a + bi) - (c + di) = (a - c) + (b - d)i
(a + bi) * (c + di) = (ac - bd) + (ad + bc)i*/
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
	complex operator + (complex c2)
	{
		complex temp;
		temp.real=real+c2.real;
		temp.imag=imag+c2.imag;
		return temp;
	}
	complex operator - (complex c2)
	{
		complex temp;
		temp.real=real-c2.real;
		temp.imag=imag-c2.imag;
		return temp;
	}
	complex operator * (complex c2)
	{
		complex temp;
		temp.real=real*c2.real;
		temp.imag=imag*c2.imag;
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
	c3=c1-c2;
	c3.display();
	c3=c1*c2;
	c3.display();
	return 0;
}
/*enter c1
enter real num
15
enter imag num
20
enter c2
enter real num
30
enter imag num
10
real num=45
imag num=30
real num=-15
imag num=10
real num=450
imag num=200*/
