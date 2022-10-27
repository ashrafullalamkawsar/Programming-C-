//Write a program that reads a first name, last name, and year of birth and displays the names and the year one after another sequentially.
#include<iostream>
using namespace std;

class Information
{
    public:
    string fn,ln,DOB;

    void InputData()
    {
    cout<<"Enter Your First Name = ";
    cin>>fn;
    cout<<"Enter Your Last Name = ";
    cin>>ln;
    cout<<"Enter Your Date Of Birth = ";
    cin>>DOB;
    }
    void ShowData()
    {
        cout<<"Name = "<<fn <<" "<<ln<<endl;
        cout<<"Date Of Birth = "<<DOB<<endl;
    }
};

int main()
{
    Information Result;
    Result.InputData();
    Result.ShowData();
    
    return 0;
}
