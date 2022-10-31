//Write a program to check whether you are eligible to make a NID Card or not.

#include<bits/stdc++.h>
using namespace std;

class NID
{
    public:
    int age;

    void InputData()
    {
        cout<<"Please Enter Your Age : ";
        cin>>age;
    }
    void ShowData()
    {
        if(age>=18)
        cout<<endl<<"Congratulations! You Are Eligible to Make NID Card.";
        else
        cout<<endl<<"Sorry! You Are Not Eligible to Make NID Card.";
    }
};

int main()
{
    NID Check;

    Check.InputData();
    Check.ShowData();
    
    return 0;
}