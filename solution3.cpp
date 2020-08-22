#include<iostream>

using namespace std;

int main()
{
    int a[5],i;
    cout<<"Enter the array";
    for(i=0;i<5;i++)
    {
        cin>>a[i];
    }
    cout<<"\n The array you entered is: \n";
    for(i=0;i<5;i++)
    {
        cout<<a[i];
    }
    return 0;
}
