//Write a program to enter the length, and breadth of a rectangle and find its perimeter and area.

#include<iostream>
using namespace std;

class Rectangle
{
    public:
    int length,breadth;

    void InputData()
    {
        cout<<"Enter The Length & Breadth of The Rectangle = ";
        cin>>length>>breadth;
    }
    void Area()
    {
        int area = length * breadth;
        cout<<"Area = "<<area<<endl;
    }
    void Perimeter()
    {
        int perimeter = 2*(length + breadth);
        cout<<"Perimeter = "<<perimeter<<endl;
    }
};

int main()
{
    Rectangle Result;

    Result.InputData();
    Result.Area();
    Result.Perimeter();

    return 0;
}