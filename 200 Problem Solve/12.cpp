//Write a Program that takes minutes as input and displays the total number of hours and minutes.
#include <iostream>
using namespace std;

class HoursmMinutes
{
    public:
    int min,restMin,Hour;

    void InputData()
    {
        cout<<"Enter Your Minutes = ";
        cin>>min;
    }
    void CalculationData()
    {
        Hour = (min / 60);
        restMin = (min % 60);

        cout<<"Total "<<Hour<<" Hour and " <<restMin<<" Minutes ";
    }
};

int main()
{
    HoursmMinutes Result;
    Result.InputData();
    Result.CalculationData();

    return 0;
}
