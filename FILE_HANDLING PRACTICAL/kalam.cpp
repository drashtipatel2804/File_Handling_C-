/*A Kalam.txt file contains the eassy of Abdul Kalam. Write a JAVA program to replace a "Abdul Kalam"
word with "Missile Man" in Kalam.txt file and display new content of file on the screen.
*/

#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	char ch;
	string paragraph = " " , word;
	string oldn="Abdul Kalam";
	string newn="Missile Man";
	ofstream fout;
	fout.open("kalam.txt");
	cout<<"enter paragraph"<<endl;
	while(1)
	{
		cin.get(ch);
		if(ch=='0')
		{
			break;
		}
		fout<<ch;
	}
	fout.close();
	ifstream fin;
	fin.open("kalam.txt");
	if(!fin){
        cout<<"File Opening ERROR"<<endl;
        return 0;
    }
    while(1)
    {
    	fin>>word;
    	if(fin.eof()){ break;}
		if(word==oldn){ word=newn;}
		paragraph  += word + " ";
	}
	fin.close();
	fout.open("kalam.txt");
    fout<<paragraph<<endl;

    cout<<"\nNew Content in file is : ";
    fin.open("kalam.txt");
    while(1)
    {
        fin>>word;
        if(fin.eof()){break;}
        cout<<word<<" ";
    }
    
    return 0;	
	
}
