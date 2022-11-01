//Write a program to check two integers whether they are equal or not.

#include<iostream>
using namespace std;

class CheckInteger
{
    public:
    int a,b;

    void InputData()
    {
        cout<<"Enter Two Number To Check Whether They Are Equal Or Not = ";
        cin>>a>>b;
    }
    void ShowData()
    {
        if (a == b)
        cout<<a<<" & "<<b<<" are equal";
        else
        cout<<a<<" & "<<b<<" are not equal";
    }
};

int main()
{
    CheckInteger Check;
    
    Check.InputData();
    Check.ShowData();

    return 0;
}