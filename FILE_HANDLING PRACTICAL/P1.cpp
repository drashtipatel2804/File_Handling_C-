/*Define class binary with two data members, num1 and num2 and 
overload all binary operators to perform addition, subtraction, 
multiplication and division*/

#include<iostream>
using namespace std;
class binary
{
	int num1,num2 , sum;
	public:
		binary()
		{
			
		}
		void getdata()
		{
			cout<<"enter num1"<<endl;
			cin>>num1;
			cout<<"enter num2"<<endl;
			cin>>num2;
		}
		void display()
		{
			cout<<"sum = "<<sum<<endl;
		}
		binary operator + (binary b1)
		{
			
			binary temp;
			temp.sum=b1.num1+b1.num2;
			return temp;
		}
		binary operator - (binary b1)
		{
			binary temp;
			temp.sum=b1.num1-b1.num2;
			return temp;
		}
		binary operator * (binary b1)
		{
			binary temp;
			temp.sum=b1.num1*b1.num2;
			return temp;
		}
		binary operator / (binary b1)
		{
			binary temp ;
			temp.sum=b1.num1/b1.num2;
			return temp;
		}
};
int main()
{
	binary b1,b2;
	cout<<"enter b1"<<endl;
	b1.getdata();
	b2=b1+b1;
	b2.display();
	b2=b1-b1;
	b2.display();
	b2=b1*b1;
	b2.display();
	b2=b1/b1;
	b2.display();
	return 0;
	
}
/*enter b1
enter num1
10
enter num2
5
sum = 15
sum = 5
sum = 50
sum = 2*/
