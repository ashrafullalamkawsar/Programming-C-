//Write a program to print your name, date of birth, and mobile number.


#include<iostream>
using namespace std;

class Information
{
    public:
    string Name,DOB,Mobile;
    void InputData()
    {
        cout<<"Enter Your Name = ";
        cin>>Name;
        cout<<"Enter Your Date Of Birth = ";
        cin>>DOB;
        cout<<"Enter Your Mobile Number = ";
        cin>>Mobile;
    }

    void OutData()
    {
        cout<<endl<<"Name = "<<Name<<endl;
        cout<<"Date Of Birth = "<<DOB<<endl;
        cout<<"Mobile Number = "<<Mobile<<endl;
    }
};

int main()
{
    Information Data;

    Data.InputData();
    Data.OutData();

    return 0;
}
