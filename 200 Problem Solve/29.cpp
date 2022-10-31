//Write a program to check whether the character is an alphabet or not.

#include<bits/stdc++.h>
using namespace std;

class CheckCharacter
{
    public:
    char character;

    void InputData()
    {
        cout<<"Enter a Character : ";
        cin>>character;
    }
    void ShowData()
    {
        if ( (character>='a' && character<='z') ||  (character>='A' && character<='Z') )
            cout<<endl<<character<<" is Alphabet";

        else
            cout<<endl<<character<<" is Not Alphabet";

    }
};

int main()
{
    CheckCharacter Check;

    Check.InputData();
    Check.ShowData();
    
    return 0;
}