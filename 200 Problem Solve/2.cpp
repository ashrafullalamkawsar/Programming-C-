//Write a program to enter two numbers and perform all arithmetic operations.

#include<iostream>
using namespace std;

class Calculation
{
    public:
    int n1,n2;

    void InputDta()

    {
        cout<<"Enter Two Number = ";
        cin>>n1>>n2;
    }

    void Add()
    {
        int sum = n1+n2;
        cout<<"Sum of two numbers = "<<sum<<endl;
    }
    void sub()
    {
        int sub = n1-n2;
        cout<<"Sub of two numbers = "<<sub<<endl;
    }
    void mul()
    {
        int mul = n1*n1;
        cout<<"Multiplication of two numbers = "<<mul<<endl;
    }
    void div()
    {
        float div = n1/n2;
        cout<<"Division of two numbers = "<<div<<endl;
    }
};

int main()
{
    Calculation result;

    result.InputDta();
    result.Add();
    result.sub();
    result.mul();
    result.div();
    
    return 0;
}