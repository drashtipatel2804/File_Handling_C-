/*(M) Write a program to accept N number of Students data like student 
id,  student  name  and  write  it  into  StudentDetail.txt  file.  Also 
accepts  Course  details  like  course  id,  course  name,  and  annual 
fees, and write into CourseDetails.txt file. 
Make sure that student id  of  StudentDetail.txt  must  exist  in  CourseDetails.txt.  
Write  a program  which  insert  data  with  proper  format  in  both  the  files 
and also write a program to accept student name from the user 
and according to that generate Student's Course detail which are 
opted by given student..*/
#include<iostream>
#include<fstream>
using namespace std;
void student_data(int count){
    int id;
    string name;
    ofstream fout1,fout2;
    fout1.open("StudentDetail.txt");
    fout2.open("CourseDetails.txt",ios::app);
    for(int i=0 ; i<count ; i++){
        cout<<"Fill a Detail for Student "<<i+1<<":-\n";
        cout<<"Student ID   : ";
        cin>>id;
        cout<<"Student Name : ";
        cin>>name;
        fout1<<id<<endl<<name<<endl;
        fout2<<id<<endl;
    }
    fout1.close();
    fout2.close();
}
void course_data(){
    int id;
    string name , end="Student ID :-";
    float fees;
    ofstream fout("CourseDetails.txt");
    cout<<"\nFill Course Details :-\n";
    cout<<"Course Id   : ";
    cin>>id;
    cout<<"Course Name : ";
    cin>>name;
    cout<<"Course annual fees : ";
    cin>>fees;
    fout<<id<<endl<<name<<endl<<fees<<endl<<end<<endl;
}
bool DisplayCourseDetails(){
    int s_id,c_id,availbale=0;
    string s_name,c_name,tempName;
    float c_fees;
    cout<<"\nEnter a Student Name : ";
    cin>>s_name;
    ifstream fin1("StudentDetail.txt");
    ifstream fin2("CourseDetails.txt");
    if(!fin1){
        cout<<"Error in StudentDetail file Opening";
        return true;
    }
    if(!fin2){
        cout<<"Error in CourseDetails file Opening";
        return true;
    }
    while(1){
        fin1>>s_id>>tempName;
        if(fin1.eof()){break;}
        if(tempName == s_name){
            fin2>>c_id>>c_name>>c_fees;
            availbale++;
            break;
        }
    }
    if(availbale == 0){
        cout<<"\nThis Student data Not in StudentDetail File try Again \n";
        return true;
    }
    cout<<"===========================\n";
    cout<<"Student name : "<<s_name<<endl;
    cout<<"Student ID   : "<<s_id<<endl; 
    cout<<"Course Id    : "<<c_id<<endl;
    cout<<"Course Name  : "<<c_name<<endl;
    cout<<"Course Fees  : "<<c_fees<<endl;
    cout<<"===========================\n";
    return false;
}
int main(){
    int count;
    course_data();
    cout<<"\nHow many student ? : ";
    cin>>count;
    student_data(count);
    while(DisplayCourseDetails());
    return 0;
}

/*

Fill Course Details :-
Course Id   : 2021
Course Name : BMIIT
Course annual fees : 41500
PS E:\Darvin\OOP_Practical_list_4> cd "e:\Darvin\OOP_Practical_list_4\" ; if ($?) { g++ M_pro_021.cpp -o M_pro_021 } ; if ($?) { .\M_pro_021 }

Fill Course Details :-
Course Id   : 2021    
Course Name : BMIIT
Course annual fees : 41500
How many student ? : 3
Fill a Detail for Student 1:-
Student ID   : 21
Student Name : Darvin
Fill a Detail for Student 2:-
Student ID   : 22
Student Name : Akshil
Fill a Detail for Student 3:-
Student ID   : 23
Student Name : Kush

Enter a Student Name : Hetu

This Student data Not in StudentDetail File try Again
 

Enter a Student Name : Akshil
===========================
Student name : Akshil
Student ID   : 22
Course Id    : 2021
Course Name  : BMIIT
Course Fees  : 41500
===========================

IN Student file :-
21
Darvin
22
Akshil
23
Kush

IN Course file :-
2021
BMIIT
41500
Student ID :-
21
22
23
*/
