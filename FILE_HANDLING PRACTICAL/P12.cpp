
/*Write a C++ program to take number from user and write all 
numbers into file called "Number.txt" then read numbers from 
"Number.txt" and display average of only 3-digit numbers which 
are odd*/

#include<iostream>
#include<fstream>
using namespace std;
void write(int count)
{
	int n;
	ofstream fout;
	fout.open("number.txt");
	if(!fout)
	{
		cout<<"error to write this file"<<endl;
		return;
	}
	cout<<"enter integer numbers"<<endl;
	for(int i=0;i<count;i++)
	{
		cin>>n;
		fout<<n<<endl;
	}
	fout.close();
}
void read()
{
	int n , sum , avg , count , j=0;
	ifstream fin;
	fin.open("number.txt");
	if(!fin)
	{
		cout<<"error to read this file"<<endl;
		return;
	}
	while(1)
	{
		fin>>n;
		if(fin.eof())
		{
			break;
		}
		cout<<"integer numbers are "<<n<<endl;
		if(n%2!=0 && n>99 && n<1000)
		{
			sum=sum+n;
			j++;
		}	
	}
	avg=sum/j;
	cout<<"sum of  odd number = "<<sum<<endl;
	cout<<"avgerage ="<<avg<<endl;
	if(sum==0)
	{
		cout<<"there is no odd number in file"<<endl;
	}
	fin.close();
}
int main()
{
	int count, sum	, n;
	cout<<"enter how many number in the file"<<endl;
	cin>>count;
	cout<<"wrtie the number"<<endl;
	write(count);
	cout<<"read numbers"<<endl;
	read();
	return 0;
	
}


