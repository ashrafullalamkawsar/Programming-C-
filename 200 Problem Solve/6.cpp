//Write a program to find the third angle of a triangle if two angles are given.
#include<bits/stdc++.h>
using namespace std;

class Tringle
{
    public:
    int angle1,angle2,angle3;

    void InputData()
    {
        cout<<"Enter The First Angle Of Your Trigle = ";
        cin>>angle1;
        cout<<"Enter The Second Angle Of Your Trigle = ";
        cin>>angle2;
    }
    void CalculationData()
    {
        angle3 = 180 - (angle1 + angle2);
        cout<<"The Third Angle Of Your Tringle = "<<angle3;
    }

};

int main()
{
    Tringle Result;
    Result.InputData();
    Result.CalculationData();

    return 0;
}