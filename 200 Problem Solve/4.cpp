//Write a Program to calculate the area of an equilateral triangle.

#include<iostream>
#include<cmath>
using namespace std;

class EquilateralTriangleArea
{
    public:
    int a;
    float area;

    void InputData()
    {
        cout<<"Enter The Value Of Equilateral Triangle = ";
        cin>>a;
    }
    void CalculateData()
    {
        area = ((sqrt(3)/4) * (a * a));
        cout<<"Area Of Equilateral Triangle = "<<area;
    }
};

int main()
{
    EquilateralTriangleArea Area;
    Area.InputData();
    Area.CalculateData();

    return 0;
}