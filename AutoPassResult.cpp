//Find Out Auto Pass Result

#include <bits/stdc++.h>
using namespace std;

class AutoPass  //The Class
{
    public:  //Access Specifier
    float jsc, ssc, hsc, jsc30, ssc70 ;  //Attribute

    void InputData()  //Methods
    {
        cout<<"Enter Your JSC Result: ";
        cin>>jsc;
        cout<<"Enter Your SSC Result: ";
        cin>>ssc;
    }
    void CalculationData()  //Methods
    {
        jsc30 = (jsc * 30)/100 ;
        ssc70 = (ssc * 70)/100 ;
        hsc = (jsc30 + ssc70) ;
    }
    void Printdata()
    {
        cout<<endl<<"Your HSC Result is : "<<setprecision(2)<<hsc;
    }
};

int main()
{
    AutoPass Result;  // Create Object
    Result.InputData();  //Calling Methods
    Result.CalculationData();  //Calling Methods
    Result.Printdata();  //Calling Methods

    return 0;
}
