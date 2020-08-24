#include<iostream>
using namespace std;

class CalculateTime
{
private:
    int hours;
    int minutes;
    int seconds;

public:
    enterdetails();
    calsec();
};

CalculateTime :: enterdetails(){
    cout<<"Enter the following details:"<<endl;
    cout<<"Enter hours:"<<endl;
    cin>>hours;
    cout<<"Enter minutes:"<<endl;
    cin>>minutes;
    cout<<"Enter seconds:"<<endl;
    cin>>seconds;


}

CalculateTime :: calsec(){
    cout<<"The time is : "<<hours<<":"<<minutes<<":"<<seconds<<endl;
    int totalseconds;
    int hts,mts;
    hts = hours*3600;
    mts = minutes*60;
    totalseconds = hts+mts+seconds;
    cout<<"Time in total seconds:"<<totalseconds<<endl;
}


int main()
{

    CalculateTime ct;
    ct.enterdetails();
    ct.calsec();
}
