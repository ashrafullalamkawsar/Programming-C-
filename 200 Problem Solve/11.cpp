//Write a Program to enter P, T, and R and calculate compound interest.
#include<bits/stdc++.h>
#include<cmath>
using namespace std;

class CompundInterest
{
    public:
    float p,t,r,ci;

    void InputData()
    {
        cout<<"Enter The value of P ,T and R = ";
        cin>>p>>t>>r;
    }
    void CalculateData()
    {
        ci = p * (pow ((1 + r/100 ), t));
    }
    void ShowData()
    {
        cout<<"Your Compund Interest is = "<< fixed <<setprecision(2) <<ci<<endl;
        cout<<"Your Total Amount With Compund Interest is = "<< fixed <<setprecision(2) <<ci+p<<endl;
    }

};

int main()
{
    CompundInterest Result;
    Result.InputData();
    Result.CalculateData();
    Result.ShowData();

    return 0;
}