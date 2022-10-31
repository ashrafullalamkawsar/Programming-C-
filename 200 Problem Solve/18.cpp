/*Write a program to calculate a bike’s total consumption from the given total distance (integer value) traveled (in km) 
and spent fuel (in liters, float number – 2 decimal points.
*/

#include <bits/stdc++.h>
using namespace std;

class Bike
{
    public:
    int Distance;
    float price,fuel,consumption;

    void InputData()
    {
        cout<<"Enter the price of fuel(per liter): ";
        cin>>price;
        cout<<"Enter total traveled distance: ";
        cin>>Distance;
        cout<<"Enter total spent fuel: ";
        cin>>fuel;
    }
    void showData()
    {
        consumption = price * fuel;
        cout<<endl<<"Travel Distance = "<<Distance<<" KM "<<endl;
        cout<<"Fuel Spent = "<<fuel<<" Liter "<<endl;
        cout<<"Consumption  = "<<fixed << setprecision(2) <<consumption;
    }
};

int main()
{
    Bike Result;
    Result.InputData();
    Result.showData();

    return 0;
}