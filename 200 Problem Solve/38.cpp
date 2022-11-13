/*
Write a program to find the eligibility for admission to a professional course base on the following criteria:
Marks in MATHS >= 65
Marks in PHY >= 55
Marks in CHEM >= 50
Total in all three subjects => 180
Or,
Total in Math and physics >=140.
*/

#include<iostream>
using namespace std;

class Admission
{
    public:
    int Maths,Phy,Chem,Total,Total_Math_Phy;

    void InputData()
    {
        cout<<"Enter Your Maths Marks = ";
        cin>>Maths;
        cout<<"Enter Your Physics Marks = ";
        cin>>Phy;
        cout<<"Enter Your Chemistry Marks = ";
        cin>>Chem;
    }
    void CalculationData()
    {
        Total = (Maths + Phy + Chem);
        Total_Math_Phy = (Maths + Phy);

        if(Maths >= 65 && Phy >= 55 && Chem >= 50)
        {
            if ((Total >= 180) || (Total_Math_Phy >= 140 ))
            {
                cout<<"Congratulations Your Are Eligible For Admission.";
            }

            else
            {
                cout<<"Sorry Your Are Not Eligible For Admission.";
            }

        }
        else
        {
            cout<<"Sorry Your Are Not Eligible For Admission.";
        }
    }
};

int main()
{
    Admission Result;

    Result.InputData();
    Result.CalculationData();

    return 0;
}