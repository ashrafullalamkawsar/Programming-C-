//Write a program to input any character and check whether it is the alphabet, digit, or special character.

#include<bits/stdc++.h>
using namespace std;

class Check
{
    public:
    char n;

    void InputData()
    {
        cout<<"Enter anything = ";
        cin>>n;
    }
    void CalculationData()
    {
        if ((n >= 'a' && n<= 'z') || (n>='A' && n<='Z'))
        cout<<endl<<n<<" is Alphabet.";
        else if (n>='0' && n<='9')
        cout<<endl<<n<<" is Number.";
        else
        cout<<endl<<n<<" is Special Character..";
    }
};

int main()
{
    Check Result;

    Result.InputData();
    Result.CalculationData();

    return 0;
}