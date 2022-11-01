//Write a program to input the angles of a triangle and check whether a triangle is valid or not. 

#include<iostream>
using namespace std;

class CheckAngle
{
    public:
	int a,b,c,sum;

    void InputData()
    {
    cout<<"enter three angle of a triangle = ";
	cin>>a>>b>>c;
    }
    void ShowData()
    {
        sum=a+b+c;
	    if(sum==180 && a!=0 && b!=0 && c!=0)
	    cout<<"the triangle is valid"<<endl;
        else
        cout<<"the triangle is not valid"<<endl;
    }
};

int main()
{
    CheckAngle Check;

    Check.InputData();
    Check.ShowData();

    return 0;
}