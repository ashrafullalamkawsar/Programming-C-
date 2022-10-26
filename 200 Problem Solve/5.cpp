//Write a program to compute the perimeter and area of a circle with a given radius.

#include<iostream>
using namespace std;

class Circle
{
    public:
    float r = 5,area,perimeter;

    void Area()
    {
        area = 3.1416 * r * r;
        cout<<"Area Of The Circle = "<<area<<endl;
    }
    void Perimeter()
    {
        perimeter = 2 * 3.1416 * r;
        cout<<"Perimeter Of The Circle = "<<perimeter;
    }
    
};

int main()
{
    Circle Result;
    Result.Area();
    Result.Perimeter();

    return 0;
}