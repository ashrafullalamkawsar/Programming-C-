/*
Your younger brother studied in a primary school. He is fluent in the English alphabet. But don't know about the vowel and consonants.
Your mother assigns you to teach him to know about which alphabets are vowel and consonant.
So you are going to make a program (using else if ladder) where your brother writes any alphabet and your program will tell him that it is a vowel or consonant.
*/
#include<iostream>
using namespace std;

class Alphabet
{
    public:
    string Vowel;

    void InpuData()
    {
        cout<<"Enter Your Alphabet = ";
        cin>>Vowel;
    }
    void ShowData()
    {
        if (Vowel == "a" || Vowel == "A")
        cout<<Vowel<<" is a alphabet";

        else if (Vowel == "e" || Vowel == "E")
        cout<<Vowel<<" is a alphabet";

        else if (Vowel == "i" || Vowel == "I")
        cout<<Vowel<<" is a alphabet";

        else if (Vowel == "o" || Vowel == "O")
        cout<<Vowel<<" is a alphabet";

        else if (Vowel == "u" || Vowel == "U")
        cout<<Vowel<<" is a alphabet";

        else
        cout<<Vowel<<" is not a alphabet";

    }
};

int main()
{
    Alphabet Result;
    Result.InpuData();
    Result.ShowData();

    return 0;
}