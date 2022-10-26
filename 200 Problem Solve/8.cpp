//Write a program that converts Fahrenheit to Centigrade.
#include<bits/stdc++.h>
using namespace std;

class FahrenheitToCentigrade
{
    public:
    float Centigrade,Fahrenheit;

    void INputData()
    {
        cout<<"Enter the value of fahrenheit = ";
        cin>>Fahrenheit;
    }
    void ShowData()
    {
        Centigrade = (Fahrenheit - 32) * (5/9);
        cout<<"The value of centigrade = "<< Centigrade <<"C"<<endl; 
    }
};

int main()
{
    FahrenheitToCentigrade Result;
    Result.INputData();
    Result.ShowData();

    return 0;
}