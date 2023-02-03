/*A Content.txt file contains the eassy of Gandhiji. Write a program 
to replace a "Gandhiji" word with "Mahatama" in Content.txt file 
and display new content of file on the screen*/


#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    char ch;
    string paragraph = " ",word;
    string oldName = "Gandhiji"; 
    string newName = "Mahatama";
    ofstream fout;
    fout.open("Content.txt");
    cout<<"Enter a Gandhiji peregraph ('0' to stop): ";
    while(1){
        cin.get(ch);
        if(ch == '0'){break;}
        fout<<ch;
    }
    fout.close();
    ifstream fin;
    fin.open("Content.txt");
    if(!fin){
        cout<<"File Opening ERROR"<<endl;
        return 0;
    }
    while(1)
    {
        fin>>word;
        if(fin.eof()){break;}
        if(word == oldName){word = newName;}
        paragraph += word + " ";
    }
    fin.close();
    fout.open("Content.txt");
    fout<<paragraph<<endl;

    cout<<"\nNew Content in file is : ";
    fin.open("Content.txt");
    while(1)
    {
        fin>>word;
        if(fin.eof()){break;}
        cout<<word<<" ";
    }
    
    return 0;
}
/*Enter a Gandhiji peregraph ('0' to stop):
Gandhiji is our national father
0

New Content in file is : Mahatama is our national father*/
