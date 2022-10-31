//Write a program to check the uppercase or lowercase alphabet.

#include<bits/stdc++.h>
using namespace std;

class CheckAlphabet
{
    public:
    char alphabet;

    void InputData()
    {
        cout<<"Enter Any Alphabet : ";
        cin>>alphabet;
    }
    void ShowData()
    {
        if(alphabet>='A' && alphabet<='Z')
        cout<<endl<<"Your Alphabet is Uppercase";

    else
        cout<<endl<<"Your Alphabet is Lowercase";
    }
};

int main()
{
    CheckAlphabet Check;
    
    Check.InputData();
    Check.ShowData();

    return 0;
}