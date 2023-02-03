#include<iostream>
using namespace std;
class challange
{
    int N , sum;
    public:
    int weights[];
    challange()
    {
        sum=0;
        cout<<"enter how many second"<<endl;
        cin>>N;
        weights[N];
    }
    void getdata()
    {
        cout<<"enter number"<<endl;
        for(int i=0;i<N;i++)
        {
            cin>>weights[i];
        }
    }
    void add()
    {
        for(int i=0;i<N;i++)
        {
            sum=sum+weights[i];
        }
        cout<<sum<<endl;
    }
    
};

int main()
{
    challange c1;
    //challange();
    c1.getdata();
    c1.add();
    return 0;
}


