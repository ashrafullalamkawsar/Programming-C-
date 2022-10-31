//Write a program to find the maximum between three numbers.

#include<bits/stdc++.h>
using namespace std;

class Maximum
{
    public:
    int n1,n2,n3;

    void InputData()
    {
        cout<<"Enter Two numbers = ";
        cin>>n1>>n2>>n3;
    }
    void CalculationData()
    {
        if((n1>n2) && (n1>n3))
        cout<<endl<<n1<<" is The Biggest Number.";
        else if((n2>n1) && (n2>n3))
        cout<<endl<<n2<<" is The Biggest Number.";
        else
        cout<<endl<<n3<<" is The Biggest Number.";
    }
};

int main()
{
    Maximum Result;

    Result.InputData();
    Result.CalculationData();

    return 0;
}