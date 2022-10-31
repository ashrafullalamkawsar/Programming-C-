//Write a program to check whether a number is odd or not.

#include<bits/stdc++.h>
using namespace std;

class EvenOdd
{
    public:
    int number;

    void InputData()
    {
        cout<<"Enter a number to check even or odd = ";
        cin>>number;
    }
    void CalculationData()
    {
        if (number % 2 == 0)
        cout<<endl<<number<<" is an even number.";
        else
        cout<<endl<<number<<" is an odd number.";
    }
};

int main()
{
    EvenOdd Result;

    Result.InputData();
    Result.CalculationData();
    
    return 0;
}