//Write a program to check whether the triangle is an equilateral, isosceles, or scalene triangle.

#include<iostream>
using namespace std;

class CheckTringle
{
    public:
    int side1, side2, side3;

    void InputData()
    {
        cout << "Please Enter Three Sides of a Triangle =  ";
	    cin >> side1 >> side2 >> side3;
    }
    void ShowData()
    {
        if(side1 == side2 && side2 == side3)
  	
  		    cout << "\nThis is an Equilateral Triangle";
  	
  	    else if(side1 == side2 || side2 == side3 || side1 == side3)
    
  		    cout << "\nThis is an Isosceles Triangle";
	
  	    else
    	    cout << "\nThis is a Scalene Triangle";
    }
    
};

int main()
{
	CheckTringle Check;
    
    Check.InputData();
    Check.ShowData();
	
 	return 0;
}