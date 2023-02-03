
/*Create a class Distance with members feet, inches and member 
fucntion input() to take distance from keyboard and output() to 
display distance on screen. Overload + operator using member 
function to add two distance objects and return distance object, 
also overload > operator using friend function to compare which 
distance object is greater and return 0 and 1 accordingly*/

#include<iostream>
using namespace std;
class dis
{
	float feet , inch;
	public:
	dis()
	{
		feet=inch=0.0;
	}
	dis (float f , float i)
	{
		feet=f;
		inch=i;
	}
	void input()
	{
		cout<<"enter feet"<<endl;
		cin>>feet;
		cout<<"emter inch"<<endl;
		cin>>inch;
	}
	void output()
	{
		cout<<"feet="<<feet<<endl;
		cout<<"inch="<<inch<<endl;
	}
	dis operator + (dis d1)
	{
		dis temp;
		temp.feet=feet+d1.feet;
		temp.inch=inch+d1.inch;
		return temp;
	}
	friend bool operator > (dis d1 , dis d2 )
	{
		if(d1.feet > d2.feet )
			return true;
		else
			return false;
		
	}
	
	
};
int main()
{
	dis d1,d2,d3;
	dis d4(100.0,200.0);
	dis d5(200.0,100.0);
	cout<<"enter d1"<<endl;
	d1.input();
	cout<<"enter d2"<<endl;
	d2.input();
	d3=d1+d2;
	d3.output();
	if(d4>d5)
		cout<<"d4 is big"<<endl;
	else
		cout<<"d5 is big"<<endl;
	return 0;
}

/*enter d1
enter feet
20
emter inch
30
enter d2
enter feet
20
emter inch
30
feet=40
inch=60
d5 is big*/

