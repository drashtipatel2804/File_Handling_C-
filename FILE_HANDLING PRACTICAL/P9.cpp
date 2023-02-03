/* There is a file namely Integer.txt which contains only integer 
numbers. Write a C++ program to read the numbers from 
Integer.txt file and display the sum of even numbers only.*/

#include<iostream>
#include<fstream>
using namespace std;
void write_num(int count)
{
	int n;
	ofstream fout;
	fout.open("Integer.txt");
	if(!fout)
	{
		cout<<"-error to can not write in this file"<<endl;
		return ; 
	}
	cout<<"enter integer numbers"<<endl;
	for(int i=0 ; i<count ; i++)
	{
		cin>>n;
		fout<<n<<endl;	
	}

	fout.close();

}
void read_num()
{
	int n , count ;
	int sum=0;
	ifstream fin;
	fin.open("Integer.txt");
	if(!fin)
	{
		cout<<"error to open file"<<endl;
		return ;
	}
	while(1)
	{
		fin>>n;
		if(fin.eof())
		{
			break;
		}
		cout<<"integer numbers are "<<n<<endl;
		
		if(n%2==0)
		{
			sum=sum+n;
		}
	}
	
	cout<<"sum of even number = "<<sum<<endl;
	if(sum==0)
	{
		cout<<"there is no even number in file"<<endl;
	}
	fin.close();
	
}

int main()
{
	int count, sum	, n;
	cout<<"enter how many number in the file"<<endl;
	cin>>count;
	cout<<"wrtie the number"<<endl;
	write_num(count);
	cout<<"read numbers"<<endl;
	read_num();
	return 0;
	
}


