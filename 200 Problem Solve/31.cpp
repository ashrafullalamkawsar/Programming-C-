//Write a program to input the week number and print the weekday.

#include<iostream>
using namespace std;

class WeekName
{
    public:
    int Days;

    void InputData()
    {
        cout<<"Enter Your Days Number = ";
        cin>>Days;
    }
    void ShowData()
    {
        if(Days == 1)
        cout<<"Its Saturday.";
        else if(Days == 2)
        cout<<"Its Sunday .";
        else if(Days == 3)
        cout<<"Its Monday.";
        else if(Days == 4)
        cout<<"Its Tuesday.";
        else if(Days == 5)
        cout<<"Its Wednesday.";
        else if(Days == 6)
        cout<<"Its Thursday.";
        else if(Days == 7)
        cout<<"Its Friday.";
        else
        cout<<"Wrong Input!! Please Try Again";
    }
};

int main()
{
    WeekName Name;

    Name.InputData();
    Name.ShowData();

    return 0;
}