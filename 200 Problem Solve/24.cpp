//Write a program to check whether a number is divisible by 5 or 11 or not.
#include<bits/stdc++.h>
using namespace std;

class Divisible
{
    public:
    int num;

    void InputData()
    {
        cout<<"Enter a number to check the number is divisible by 5 or 11 or not = ";
        cin>>num;
    }
    void CalculationData()
    {
        if ((num % 5 == 0) &&  (num % 11 == 0))
        cout<<endl<<num<<" is divisible by 5 and 11";
        else if(num % 5 == 0)
        cout<<endl<<num<<" is divisible by 5";
        else if (num % 11 == 0)
        cout<<endl<<num<<" is divisible by 11";
        else
        cout<<endl<<num<<" is not divisible by 5 or 11";
    }
};

int main()
{
    Divisible Check;

    Check.InputData();
    Check.CalculationData();

    return 0;
}