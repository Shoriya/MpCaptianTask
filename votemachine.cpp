#include <iostream>
using namespace std;

int main()
{
    int a;
    char ans;
    do{
    cout << "Enter your age: ";
    cin>>a;
    if(a>18){
        cout<< "You are eligible to vote \n";
        }
    else{
        cout<< "You are not eligible to vote \n";
    }
    cout<<"Do you want to continue?(y/n) \n";
    cin>>ans;
    }while((ans == 'y')||(ans == 'Y'));

    return 0;
}
