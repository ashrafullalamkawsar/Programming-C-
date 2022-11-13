/*
Write a program to read the temperature in centigrade and display a suitable message according to the temperature state below: 
Temp < 0 then Freezing weather
Temp 0-10 then very cold weather
Temp 10-20 then cold weather 
Temp 20-30 then Normal in Temp
Temp 30-40 then it’s hot
Temp >=40 then it’s very hot.
*/

#include<iostream>
using namespace std;

class Temperature
{
    public:
    int centi;

    void InputData()
    {
        cout<<"Enter Temperature : ";
        cin>>centi;
    }
    void CalculationData()
    {
        if(centi < 0)
    {
        cout<<"Freezing Weather.";
    }
    else if(centi >=0 && centi <=10)
    {
        cout<<"very Cold Weather.";
    }
    else if(centi >= 10 && centi <=20)
    {
        cout<<"Cold Weather.";
    }else if(centi >= 20 && centi <=30)
    {
        cout<<"Normal in Temp.";
    }else if(centi >= 30 && centi <=40)
    {
        cout<<"Its Hot.";
    }
    else if (centi >=40)
    {
        cout<<"Its Very Hot.";
    }
    }
};

int main()
{
    Temperature Result;
    
    Result.InputData();
    Result.CalculationData();

    return 0;
}