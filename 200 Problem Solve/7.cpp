//Write a program that converts Centigrade to Fahrenheit.
#include<bits/stdc++.h>
using namespace std;

class CentigradeToFahrenheit
{
    public:
    float Centigrade,Fahrenheit;

    void INputData()
    {
        cout<<"Enter the value of centigrade = ";
        cin>>Centigrade;
    }

    void ShowData()
    {
        Fahrenheit = (Centigrade * 9/5) + 32;
        cout<<"The value of fahrenheit = "<< Fahrenheit <<"F"<<endl; 
    }
};

int main()
{
    CentigradeToFahrenheit Result;
    Result.INputData();
    Result.ShowData();

    return 0;
}