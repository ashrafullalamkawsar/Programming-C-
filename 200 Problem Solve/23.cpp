//Write a program to check whether a number is negative, positive, or zero.

#include<bits/stdc++.h>
using namespace std;

class CheckNumber
{
    public:
    int num;

    void InputData()
    {
        cout<<"Enter a number to check the number is negative, positive, or zero = ";
        cin>>num;
    }
    void CalculationData()
    {
        if (num > 0)
        cout<<num<<" is Positive Number";
        else if(num < 0)
        cout<<num<<" is Negative Number";
        else if(num == 0)
        cout<<num<<" is Zero Number";
    }
};

int main()
{
    CheckNumber Check;

    Check.InputData();
    Check.CalculationData();

    return 0;
}