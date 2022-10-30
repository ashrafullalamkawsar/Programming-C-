//Write a program to convert specified days into years, weeks, and rest of the days.

#include <iostream>
using namespace std;

class Year
{
    public:
    int days,years,months,weeks,restdays;
    
    void InputData()
    {
        cout<<"Enter Your Total Days : ";
        cin>>days;
    }
    void CalculationData()
    {
        years = days / 365 ;
        days = days -(years * 365);
        months = days / 30 ;
        days = days - (months * 30);
        weeks = days / 7 ;
    }
    void ShowData()
    {
        cout<<"Total "<<years<<" Years "<<endl;
        cout<<"Total "<<months<<" Months "<<endl;
        cout<<"Total "<<weeks<<" Weeks "<<endl;
        cout<<"Total "<<days<<" Days"<<endl;
    }
};

int main()
{
    Year Result;
    Result.InputData();
    Result.CalculationData();
    Result.ShowData();
    
    return 0;
}
