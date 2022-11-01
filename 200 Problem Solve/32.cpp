//Write a program to input the month number and print the number of days in that month.

#include<iostream>
using namespace std;

class MonthName
{
    public:
    int Months;

    void Inputdata()
    {
        cout<<"Enter Your Months Number = ";
        cin>>Months;
    }
    void ShowData()
    {
        if (Months == 1)
        cout<<"Its January - 31 days";
        else if (Months == 2)
        cout<<"Its February - 28 days in a common year and 29 days in leap years";
        else if (Months == 3)
        cout<<"Its March - 31 days";
        else if (Months == 4)
        cout<<"Its April - 30 days";
        else if (Months == 5)
        cout<<"Its May - 31 days";
        else if (Months == 6)
        cout<<"Its June - 30 days";
        else if (Months == 7)
        cout<<"Its July - 31 days";
        else if (Months == 8)
        cout<<"Its August - 31 days";
        else if (Months == 9)
        cout<<"Its September - 30 days";
        else if (Months == 10)
        cout<<"Its October - 31 days";
        else if (Months == 11)
        cout<<"Its November - 30 days";
        else if (Months == 12)
        cout<<"Its December - 31 days";
        else
        cout<<"Wrong Input!! Please Try Again";
    }
};

int main()
{
    MonthName Name;
    
    Name.Inputdata();
    Name.ShowData();

    return 0;
}