//Write a Program to enter marks of five subjects and calculate the total, average, and percentage.

#include<bits/stdc++.h>
using namespace std;

class Subjects
{
    public:
    int Sub[5],Total = 0;
    float average,Percenntage;

    void InputData()
    {
        cout<<"Enter Your 5 Subject Result = ";
        for(int i = 0; i< 5; i++)
        {
            cin>>Sub[i];
        }
    }
    void CalculationData()
    {
        for (int i = 0; i< 5; i++)
        {
            Total = Total + Sub[i];
        }

        average = Total / 5;
        Percenntage = (Total / 500) * 100;

        cout<<"Total Marks = "<< Total <<endl;
        cout<<"Average Of 5 Subject Marks = "<<average<<endl;
        cout<<"Percentage Of 5 Numbers = "<<Percenntage<<endl;
    }

};

int main()
{
    Subjects Result;
    Result.InputData();
    Result.CalculationData();

    return 0;
}
