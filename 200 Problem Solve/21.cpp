//Write a program to check whether a number is even or not.

#include<bits/stdc++.h>
using namespace std;

class Even
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
        cout<<endl<<number<<" is not an even number.";
    }
};

int main()
{
    Even Result;

    Result.InputData();
    Result.CalculationData();

    return 0;
}