/* Define a counter class with one data. Use default and parameterized 
constructor to set the values and overload operator ++ and -- pre and 
post both to increase and decrease the values*/

#include<iostream>
using namespace std;
class counter
{
	int i;
	public:
		counter()
		{
			i=0;
		}
		counter(int x)
		{
			i=x;
		}
		int getcounter()
		{
			return i;
		}
	// Overloading the prefix operator
	    counter operator++()
	    {
	        counter temp;
	        temp.i = ++i;
	        return temp;
	    }
	    //postfix
		counter operator++(int)
    	{
	        counter temp;
	        temp.i = i++;
	        return temp;
    	}
    	//prefix
    	counter operator--()
    	{
	        counter temp;
	        temp.i = --i;
	        return temp;
    	}
    	//postfix
    	counter operator--(int)
    	{
	        counter temp;
	        temp.i = i--;
	        return temp;
    	}
 
			
};
int main()
{
	counter c(15);
	++c;
	cout<<endl<<"after prefix increment "<<c.getcounter();
	c++;
	cout<<endl<<"after postfix increment "<<c.getcounter();
	--c;
	cout<<endl<<"after prefix decrement "<<c.getcounter();
	c--;
	cout<<endl<<"after postfix decrement "<<c.getcounter();
	return 0;
}
