//Write a program to enter any number and calculate its square root.

#include<bits/stdc++.h>
using namespace std;

class SquareRoot
{
    public:
    int num,result;

    void InputData()
    {
        cout<<"Enter a Number : ";
        cin>>num;
    }
    void ShowData()
    {
        result = sqrt(num);
        cout<<"Square Root Of "<<num<<" is = "<<result;
    }
};

int main()
{
    SquareRoot Root;
    Root.InputData();
    Root.ShowData();
    
    return 0;
}