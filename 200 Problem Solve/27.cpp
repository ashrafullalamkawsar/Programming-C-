//Write a program to check whether the year is a leap year or not.

#include<bits/stdc++.h>
using namespace std;

class LeapYear
{
    public:
    int year;

    void InputData()
    {
        cout<<"Enter a Year to Check Leap Year : ";
        cin>>year;
    }
    void ShowData()
    {
        if((year %4 == 0 && year %100 !=0) || (year %400 == 0))
            cout<<endl<<year<<" is Leap Year";
        else
            cout<<endl<<year<<" is Not Leap Year";

    
    }
};

int main()
{
    LeapYear Check;
    
    Check.InputData();
    Check.ShowData();

    return 0;
}