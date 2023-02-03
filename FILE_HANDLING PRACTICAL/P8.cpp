/*Write a program that can perform the following functions on 
strings. (Use overloaded operators where possible). (Do not use 
predefined string class )
Concatenate two string using + operator
Compare two strings for equality (== operator)
Check whether first string is smaller than the second (<= 
operator*/

#include<iostream>
#include<string.h>
using namespace std;
const int size = 50;
class string1
{
	char str[size];
	public:
	string1()
	{
		strcpy(str,"");
	}
	string1(char *str1)
	{
		strcpy(str,str1);
	}
	void display()
	{
		cout<<endl<<str;
	}
	string1 operator +(string1 s)
	{
		string1 temp;
		strcat(str,s.str);
		strcpy(temp.str,str);
		return temp;
	}
	bool  operator <= (string1 s)
	{
		if(str<s.str)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
};
int main()
{
	string1 str1("welcom to ");
	string1 str2("UTU");
	string1 str3;
	str1.display();
	str2.display();
	str3=str1+str2;
	str3.display();
	if(str1<=str2)
	{
		cout<<endl<<"string 1 is smaller than string 2"<<endl;
	}
	else
	{
		cout<<endl<<"string 2 is smaller than string 1"<<endl;
	}
	return 0;
	
}
/*welcom to
UTU
welcom to UTU
string 2 is smaller than string 1
*/
