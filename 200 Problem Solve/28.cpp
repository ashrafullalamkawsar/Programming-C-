//Write a program to input any alphabet and check whether it is a vowel or consonant.

#include<bits/stdc++.h>
using namespace std;

class CheckAlphabet
{
    public:
    char alphabet;

    void Inputdata()
    {
        cout<<"Enter Any Alphabet : ";
        cin>>alphabet;
    }
    void ShowData()
    {
        if((alphabet=='a' || alphabet=='e' || alphabet=='i' || alphabet=='o' || alphabet=='u') || 
        (alphabet=='A' || alphabet=='E' || alphabet=='I' || alphabet=='O' || alphabet=='U'))
    {
        cout<<endl<<alphabet<<" is Vowel";
    }
    else
        cout<<endl<<alphabet<<" is consonant";
    }

};

int main()
{
    CheckAlphabet Check;

    Check.Inputdata();
    Check.ShowData();
    
    return 0;
}