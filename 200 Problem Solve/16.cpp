//Write a program to find the power of any number x ^ y.

#include<bits/stdc++.h>
using namespace std;

class Power
{
    public:
    int base, power,result;

    void InputData()
    {
        cout<<"Enter The Value of Base : ";
        cin>>base;
        cout<<"Enter The Value of Power : ";
        cin>>power;
    }

    void calculationData()
    {
        result = pow(base,power);
        cout<<"The Power Of "<<base<<" is = "<<result;
    }
};

int main()
{
    Power Results;
    Results.InputData();
    Results.calculationData();
    
    return 0;
}